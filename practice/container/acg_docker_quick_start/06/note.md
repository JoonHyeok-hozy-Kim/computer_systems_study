[Back to ACG Docker Quick Start](../main.md)

# Container Lifecycle

### Three Status of a container
1. Start
2. Running
3. Stop

<br>

### Container Commands
|Command|Meaning|Demonstration|
|-|-|-|
|``` docker container ls ```|Show the currently running containers.|![](images/001.png)|
|``` docker container ls -a ```|Show all containers including the ones that are running and are stopped.|![](images/002.png)|
|``` docker container run <image_id> ```|Start a new container. But it will immediately be stopped.|![](images/003.png)|
|||![](images/004.png)|
|``` docker container start <container_id> ```|Start a currently stopped container.|![](images/005.png)|
|``` docker container attach <container_id> ```|Attach to the container that is running.|![](images/006.png)|
|``` (attached_to_a_container)# exit ```|Stop the container.|![](images/007.png)|




[Back to ACG Docker Quick Start](../main.md)