[Back to ACG DCA](../main.md)

# Docker Registries

### Concept) Docker Registry
- A Docker registry is responsible for storing and distributing Docker images.
- Types) 
  - Public Registry
    - Docker Hub
  - Private Registry
    - You can create your own registries using Docker's open source registry software.
    - Docker Trusted Registry (Docker Enterprise only)

<br>

#### Tech.) How to create a registry
- How?)
  - Run a container using the registry image.
  - Publish port 5000. 
- Hands on)
  - Creating a registry.
    - Run Docker's open source registry software with the port 5000.
      ```
      docker run -d -p 5000:5000 --restart=always --name [registry_name] registry:2
      ```
      - Creating a registry with the default configuration
        - ```-e REGISTRY_[env_var_setup]``` : Name the environment variable into ```REGISTRY_```
          - This will allow you to modify the variables in the default yaml file.
        - e.g.) The command below defines the environment variable for the log level.
          ```
          docker run -d -p 5000:5000 --restart=always --name registry -e   REGISTRY_LOG_LEVEL=debug registry:2
          ```
          - Check if the debugging is working. See the log.
            ```
            docker logs registry
            ```
  - Removing the registry.
    - Stop and remove the container.
      ```
      docker container stop [registry_name] && docker container rm -v registry
      ```
      - ```-v``` : Remove all the volume mounted on the registry.


<br>

#### Concept) Registry Security Setup
- By default, the registry is completely unsecured.
- It does not use TLS and does not require authentication.
  - Thus, we should...
    1. Use TLS with a certificate.
    2. Require user authentication.
- Hands on
  - Generate an htpasswd file to be used for authentication:
    - Create a directory at home
      ```
      mkdir ~/registry
      cd ~/registry
      ```
    - Create a ```auth``` directory at registry
      ```
      mkdir auth
      ```
    - Generate a htpasswd file.
      - Temporarily run our registry image to run htpasswd and output the result to  ```htpasswd``` file.
        ```
        docker run --entrypoint htpasswd registry:2 -Bbn [id] [password] > auth/htpasswd
        ```
  - Generate a self-signed certificate. 
    - Create a ```certs``` directory at registry
      ```
      mkdir ~/registry/certs
      ```
    - ```openssl``` to generate a cert.
      ```
      openssl req \
      -newkey rsa:4096 -nodes -sha256 -keyout certs/domain.key \
      -x509 -days 365 -out cert/domain.crt
      ```
      - Press Enter for most of the prompts except **Common Name**.
      - Common Name : Enter the public host name of your server where your registry resides.   
        ![](images/001.png)
  - Run the registry with authentication and TLS enabled.
    ```
    docker run -d -p 443:443 --restart=always --name registry \
    -v [user_home_dir]/registry/certs:/certs \
    -v [user_home_dir]/registry/auth:/auth \
    -e REGISTRY_HTTP_ADDR=0.0.0.0:443 \
    -e REGISTRY_HTTP_TLS_CERTIFICATE=/certs/domain.crt \
    -e REGISTRY_HTTP_TLS_KEY=/certs/domain.key \
    -e REGISTRY_AUTH=htpasswd \
    -e "REGISTRY_AUTH_HTPASSWD_REALM=Registry Realm" \
    -e REGISTRY_AUTH_HTPASSWD_PATH=/auth/htpasswd \
    registry:2
    ```
    - Port is 443 because we are using TLS.
    - Must enter the home directory of the user at [user_home_dir]
      - e.g.) ```/home/cloud_user```
  - Test
    ```
    curl -k https://localhost:443
    ```
    - No response means the success.



<br>

[Back to ACG DCA](../main.md)