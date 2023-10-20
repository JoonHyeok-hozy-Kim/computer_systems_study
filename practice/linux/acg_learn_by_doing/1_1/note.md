[Back to Linux Main](../main.md)

# Run a Ubuntu Container in Windows Using Docker

## 1. Docker Install
### 1.1 Install Docker Desktop for Windows
* [Download URL](https://docs.docker.com/desktop/install/windows-install/)
### 1.2 Install WSL


<br>

## 2. In Docker
* Log in
  ```
  docker login
  ```

* Pull the image
  ```
  docker pull danielisdan/ubuntu_hozy_initial:v231020
  ```
  * Check [Dockerfile](../../../container/hozy_library/ubuntu_dockerfiles/v231020/Dockerfile)
  
* Run the image
  ```
  docker run -it <image_id>
  ```


<br>

[Back to Linux Main](../main.md)