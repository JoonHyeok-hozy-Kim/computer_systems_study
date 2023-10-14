[Back to ACG Docker Quick Start](../main.md)

# Docker Container Port

### Hands on
* Objective
  * Access to the container from the local host.

<br>

Check containers. No image and no container.   
![](images/001.png)

<br>

Install and run nginx container.    
![](images/002.png)    
![](images/003.png)   
* The port 80 is exposed so we can access this container using programs like elinks.
* This was done by nginx image and can be found using "docker image history" command.
  ![](images/004.png)

<br>

Figure out the IP address of the nginx container.
```
docker container inspect <container_id> | grep IPAdd
```
![](images/005.png)

<br>

Connect to the IP address of that container using elinks
![](images/006.png)   
![](images/007.png)   
* However, if you try to connect to the localhost, it does not work.
    ![](images/008.png)   
    ![](images/009.png)   
  * Why not?
    * Out local host is not listening to the local port of 80 that nginx is using.

<br>

If we run apache2 with -P option, we can publish a container's port(s) to the host.
```
docker container run -d -p <host's port>:<container's port> httpd
```
![](images/010.png)


<br>

[Back to ACG Docker Quick Start](../main.md)