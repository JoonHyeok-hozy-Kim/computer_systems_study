[Back to ACG Docker Quick Start](../main.md)

# Image & Container Management

### How to remove a container that is stopped.
```
docker container rm <container_id_or_name>
```
![](images/001.png)

<br>

### How to remove an image.
```
docker image rmi <image_id>
```
![](images/002.png)
* What if we want to save the image before we remove?
  * Push the image to the dockerhub!

<br>

### Push an image to Docker Hub.
1. Create a repository at Docker Hub
   ![](./images/003.png)
2. Log in to Docker Hub
   ![](./images/004.png)
3. Tag the image
   ```
   docker image tag <image_id> <repo_namespace>/<repo_name2>:<tag>
   ```
   ![](./images/005.png)
4. Push the image
   ```
   docker image push <repository_name>:<tag>
   ```
   ![](./images/006.png)
   * Check result in Docker Hub   
    ![](images/008.png)
5. Pull the image from the Docker Hub
   ![](./images/009.png)



<br>

[Back to ACG Docker Quick Start](../main.md)