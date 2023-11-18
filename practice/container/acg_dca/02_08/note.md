[Back to ACG DCA](../main.md)

# Docker Swarm

### Concept) Docker Swarm
- Props.)
  - It allows for easily building a distributed cluster where a container can be run across multiple available servers.
  - [Official Documentation](https://docs.docker.com/engine/swarm/key-concepts/)


#### Hands on) Configuring Docker Swarm Manager
- Prerequisites)
  - Three servers
    - One Ubuntu server, with medium size
      - This will be the Swarm Manager
    - Two Ubuntu servers, with small sizes
      - These will be the Worker Nodes
- Hands on
  1. Swarm Manager Configuration
     1. [Install Docker CE](../../acg_docker_quick_start/01/note.md#2-step-by-step-installation).
     2. Initialize the swarm.
        ```
        docker swarm init --advertise-addr [private_ip_addr]
        ```
     3. Check the docker swarm info
        ```
        docker info
        ```
     3. List all the nodes in the swarm. (Currently the manager only!)
        ```
        docker node ls
        ```
  2. Swarm Node Configuration
     1. 
       

<br>

[Back to ACG DCA](../main.md)