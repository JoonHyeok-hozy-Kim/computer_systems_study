[Back to ACG DCA](../main.md)

# Docker Inspect

### Concept) Docker Inspect
- Def.)
  - A command that allows you to get information about Docker objects such as containers, images, services, etc.
- Command
  ```
  docker inspect [object_id]
  ```
  - If you know the type of the object...
    ```
    docker container inspect [container_name]
    ```
    ```
    docker service inspect [service_name]
    ```
  - ```--pretty``` flag is available for some objects
    ```
    docker service inspect --pretty [service_name]
    ```
  - ```--format``` flag to use certain format
    - e.g.) Go template, outputting only the ID.
      ```
      docker service inspect --format='{{.ID}}' [service_name]
      ```


<br>

<br>

[Back to ACG DCA](../main.md)