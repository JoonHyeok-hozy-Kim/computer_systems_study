[Back to ACG DCA](../main.md)

# [Hands on Lab] Docker Stack

### Objective)
- Some background information on the three services:
  - Fruit Service
    - Provides a list of fruits sold in the company's stores.
    - You can use the Docker image tag ```linuxacademycontent/fruit-service:1.0.1``` to run this service.
    - Listens on port ```80```.
    - The service should be named ```fruit``` inside the stack.
  - Vegetable Service
    - Provides a list of vegetables sold in the company's stores.
    - You can use the Docker image tag ```linuxacademycontent/vegetable-service:1.0.0``` to run this service.
    - Listens on port ```80```.
    - The service should be named ```vegetables``` inside the stack.
  - All Products Service
    - Queries the other two services, combining their data into a single list of all produce.
    - You can use the Docker image tag ```linuxacademycontent/all-products:1.0.0``` to run this service.
    - Listens on port ```80```.
    - Use the environment variables ```FRUIT_HOST``` and ```FRUIT_PORT``` to set the host and port which will be used to query the fruit service.
    - Use the environment variables ```VEGETABLE_HOST``` and ```VEGETABLE_PORT``` to set the host and port which will be used to query the vegetable service.
- Step 1
  - Deploy a Docker application stack that meets the following specifications:
    - The stack is called ```produce```.
    - The stack runs the Fruit, Vegetable, and All Products services.
    - The All Products service is able to query the Fruit and Vegetable services.
    - The All Products service is published on port ```8080```.
    - One you have deployed the stack, you can verify whether it is working by querying the All Products service:
      ```
      curl localhost:8080
      ```
      - If the stack is set up correctly, you should get a combined list of fruits and vegetables.
- Step 2
  - Once you have deployed the stack and verified that it is working, modify the stack by scaling both the Fruit and Vegetable services up to ```3``` replicas.


<br>

## Solution)
- Create an empty project directory with a Docker compose YAML file inside.
  ```
  cd ~/
  mkdir produce
  cd produce
  vi produce.yml
  ```
- Build a stack definition in ```produce.yml``` to meet the provided specifications.
  ```yaml
  version: '3'
  services:
    fruit:
      image: linuxacademycontent/fruit-service:1.0.1
    vegetables:
      image: linuxacademycontent/vegetable-service:1.0.0
    all_products:
      image: linuxacademycontent/all-products:1.0.0
      ports:
      - "8080:80"
      environment:
      - FRUIT_HOST=fruit
      - FRUIT_PORT=80
      - VEGETABLE_HOST=vegetables
      - VEGETABLE_PORT=80
  ```
- Deploy the stack using the compose file.
  ```
  docker stack deploy -c produce.yml produce
  ```
- Verify that the stack is working.
  ```
  curl localhost:8080
  ```
    - Note that after deploying, it may take a few moments for the stack to become responsive. You can check the status of the services with ```docker stack services produce```. Once the services are up and running, you should get some JSON data containing a combined list of fruits and vegetables.




<br>

[Back to ACG DCA](../main.md)