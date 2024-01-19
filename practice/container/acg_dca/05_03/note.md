[Back to ACG DCA](../main.md)

# Docker Volumes

### Concept) Docker Volumes
- A persistent data
- Recall that the internal data in Docker are ephemeral.

<br>

### Concept) Two Types of Mounts for Docker
When mounting external storage to a container, you can use either a Bind Mount or a Volume.
#### Concept) Bind Mounts
- Mount a specific path on the host machine to the container.
- Not portable, dependent on the host machine's file system and directory structure

#### Concept) Volumes
- Stores data on the host file system, but the storage location is managed by Docker
- More portable
- Can mount the same volume to multiple containers
- Work in more scenarios

<br>

### Concept) Two Syntaxes for Creating Mounts and Volumes with Containers
Either of the ```--mount``` syntax and the ```-v``` syntax can be used for creating both Bind Mounts and Volumes.
1. The ```--mount``` syntax
   - Hands on) Creating [Bind Mount](#concept-bind-mounts) with the ```--mount``` syntax
     1. Create a directory in the host machine and create a file.
        ```
        cd ~/
        mkdir message
        echo Hello, World! > message/message.txt
        ```
     2. Run Docker with the ```--mount``` flag and check.
        ```
        docker run --mount type=bind,source=/home/cloud_user/message,destination=/root,readonly busybox cat /root/message.txt
        ```
        - Desc.)
          - ```type=bind``` : Create a Bind Mount
          - ```source=/home/cloud_user/message``` : The bind mount path
          - ```destination=/root``` : Path to mount inside the container
          - ```readonly``` Make the bind mount read-only
          - ```busybox cat /root/message.txt``` : Run busybox and simply ```cat``` ```message.txt``` in the Bind Mount.
   - Hands on) Creating [Volume](#concept-volumes) with the ```--mount``` syntax
     1. Run Docker with the ```--mount``` flag and check.
        ```
        docker run --mount type=volume,source=my-volume,destination=/root,readonly busybox sh -c 'echo hello > /root/message.txt && cat /root/message.txt'
        ```
        - Desc.)
          - ```type=bind``` : Create a Volume
          - ```source=my-volume``` : Volume name
          - ```destination=/root``` : Path to mount inside the container
          - ```busybox sh -c 'echo hello > /root/message.txt && cat /root/message.txt'``` : Run busybox, write "hello" to the ```message.txt``` in the Volume, and ```cat``` it.
2. The ```-v``` syntax
   - Hands on) Creating [Bind Mount](#concept-bind-mounts) with the ```-v``` syntax
     1. Run Docker with the ```-v``` flag and check.
        ```
        docker run -v /home/cloud_user/message:/root:ro busybox cat /root/message.txt
        ```
        - Desc.)
          - ```/home/cloud_user/message``` : The bind mount path
          - ```/root``` : Path to mount inside the container
          - ```ro``` Make the bind mount read-only
   - Hands on) Creating [Volume](#concept-volumes) with the ```-v``` syntax
     1. Run Docker with the ```-v``` flag and check.
        ```
        docker run -v my-volume:/root busybox cat /root/message.txt
        ```
        - Desc.)
          - ```my-volume``` : Already existing volume is read by the new busybox container. 
            - In this case, the new container cannot write on it. 
            - ```source=shared-volume``` in the ```--mount``` syntax is required for multiple containers to share a volume.
          - ```/root``` : Path to mount inside the container

<br>

### Tech.) Commands to Manage Volumes
1. Create a volume.
   ```
   docker volume create [VOLUME_NAME]
   ```
   - In this case, we create a volume separately from containers.
2. List current volumes.
   ```
   docker volume ls
   ```
3. Get detailed information about a volume.
   ```
   docker volume inspect [VOLUME_NAME]
   ```
4. Delete a Volume.
   ```
   docker volume rm [VOLUME_NAME]
   ```

<br>

[Back to ACG DCA](../main.md)