[Back to ACG DCA](../main.md)

# Image Cleanup

### Related Commands
- Get information about disk usage on a system
  ```
  docker system df
  ```  
  - More detailed info
    ```
    docker system df -v
    ```

<br>

- Remove dangling images, i.e. images not referenced by any tag nor a container.
  ```
  docker image prune
  ```
  - Remove all unused images (not used by a container)
    ```
    docker image prune -a
    ```


<br>

<br>

[Back to ACG DCA](../main.md)