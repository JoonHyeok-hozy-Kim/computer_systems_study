[Back to ACG DCA](../main.md)

# Dockerfile

### Concept) Dockerfile
- Def.)
  - A set of instructions which are used to construct a Docker image.
  - These instructions are called **directives**.

<br>

### Concept) Directives
- Def.)
  - Instructions in a Dockerfile
- Types)
  |Directive|Desc.|
  |:--------|:----|
  |FROM|- Starts a new build stage and sets the base image. <br> - Usually the first directive in the Dockerfile.|
  |ENV|- Set environment variables. <br> - These can be referenced in the Dockerfile itself and are visible to the container at runtime!|
  |RUN|- Creates a new layer on top of the previous layer by running a command inside that new layer and committing the changes.|
  |CMD|- Specify a default command used to run a container at execution time.|
  |EXPOSE|- Documents which port(s) are intended to publish when running a container.|
  |WORKDIR|- Sets the current working directory for subsequent directives such as ```ADD, COPY, CMD, ENTRYPOINT```, etc. <br> - Can be used multiple times to change directories throughout the Dockerfile. <br> - You can also use a relative path, which sets the new working directory relative to the previous working directory. <br> -- e.g.) Current directory is ```/var/www``` for the below case. <br> <code>WORKDIR /var <br> WORKDIR www</code>|
  |COPY|- Copy files from the local machine to the image.|
  |ADD|- Similar to ```COPY```, but can also pull files using URL and extract an archive into loose files in the image.|
  |STOPSIGNAL|Specify the signal that will be used to stop the container.|
  |HEALTHCHECK|Specify a command to run in order to perform a custom health check to verify that the container is working properly.|


<br>

### Hands on) Building a nginx Image
- Create a directory and go there.
  ```
  mkdir custom-nginx
  ```
  ```
  cd custom-nginx
  ```
- Create an ```index.html``` file which will be the main index for the new nginx.
  ```
  vim index.html
  ```
  - index.html
    ```html
    hello world!
    ```    
- Create a Dockerfile.
  ```
  vim Dockerfile
  ```
  - Dockerfile
    ```Dockerfile
    FROM ubuntu:bionic

    ENV NGINX_VERSION 1.14.0ubuntu1.11

    RUN apt-get update && apt-get install -y curl
    RUN apt-get update && apt-get install -y nginx=$NGINX_VERSION

    CMD ["nginx", "-g", "daemon off;"]
    ```
    - cf.)
      - Why repeating ```apt-get update``` in the ```RUN``` directive?
        - Recall that if containers share the previous layer, they will skip the shared directive.
        - Thus, we should repeat the ```apt-get update``` tp prevent skipping it.
- Build the image with the tag ```custom-nginx``` at the current directory.
  ```
  docker build -t custom-nginx .
  ```
- Run the image.
  ```
  docker run custom-nginx
  ```
- Check if the nginx is working properly.
  ```
  curl localhost:8080
  ```
  - The nginx default page pops up, but not the ```index.html``` that we created.
- Let's add more directive to show our ```index.html``` as the main page of the nginx server.
  - Directives added.
    1. Change the directory in the container using the ```WORKDIR``` directive.
       - ```/var/www/html``` is the directory that ```nginx``` reference the html files.
    2. Add the ```index.html``` file in the local machine using the ```ADD``` directive.
    3. Specify the port 80 using the ```EXPOSE``` directive.
    4. Put ```STOPSIGNAL``` and ```HEALTHCHECK``` at the end.
  - The new Dockerfile.
    ```Dockerfile
    FROM ubuntu:bionic

    ENV NGINX_VERSION 1.14.0ubuntu1.11

    RUN apt-get update && apt-get install -y curl
    RUN apt-get update && apt-get install -y nginx=$NGINX_VERSION

    WORKDIR /var/www/html
    ADD index.html ./   # Add index.html at local machine to the container

    EXPOSE 80

    CMD ["nginx", "-g", "daemon off;"]

    STOPSIGNAL SIGTERM
    HEALTHCHECK CMD curl localhost:80
    ```
- Again, build the image.
  ```
  docker build -t custom-nginx
  ```
- Run the built image.
  ```
  docker run -d -p 8080:80 custom-nginx
  ```
  - Options.
    - ```-d``` : detached mode
    - ```-p 8080:80``` : port into 8080:80
- Check the result.
  ```
  curl localhost:8080
  ```
- Remove the container that we created.
  ```
  docker container rm -f [container_id]
  ```

<br>

[Back to ACG DCA](../main.md)