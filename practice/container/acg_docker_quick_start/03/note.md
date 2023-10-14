[Back to ACG Docker Quick Start](../main.md)

# Docker Image

### Why this needed?
Consider the following scenario.
* Suppose a new worker came.
* Rather than making him install all the environments, we can provide a image that every packages are already installed.
* So, build an onboarding image.
* And make him pull down the image.
* And let him test the existing script.

![](images/001.png)

<br>

### Hands-on : Image related
View images
```
docker image ls
docker images
```
* Both works   
  ![](images/002.png)

<br>

If you pull down ubuntu:16.04, there are layers of images that are automatically pulled as well.
* These are configured in the dockerfile.
  ![](images/003.png)

* How to check the dockerfile? 
  * Go to Docker Hub
    ![](images/004.png)   
    ![](images/005.png)   
    ![](images/006.png)   

Run image.
```
docker run <image_name>
docker run <image_id>
```
* cf.) The full IMAGE ID is in SHA256 hash format
  ![](./images/007.png)

<br>

[Back to ACG Docker Quick Start](../main.md)