[Back to ACG DCA](../main.md)

# Docker Images

### Concept) Docker Image
- Def.)
  - A file containing the code and components needed to run software in a container.   

<br>

### Concept) Layered File System
- Usage)
  - Containers and images use a layered file system.
    - Each layer contains only the differences from the previous layer.
      - e.g.) nginx   
        ![](images/001.png)
  - The image consists of on or more read-only layers, while the container adds one addition writable layer.    
    ![](images/002.png)
- Advantage)
  - Allows multiple images and containers to share the same layers.
    - Smaller overall storage footprint
    - Faster image transfer
    - Faster image build 

<br>

### Tech) Image Related Commands
- Pull an image.
  ```
  docker image pull [image_name]:[tag]
  ```
- LIst the layers used to build an image
  ```
  docker image history [image_name]
  ```

<br>

[Back to ACG DCA](../main.md)