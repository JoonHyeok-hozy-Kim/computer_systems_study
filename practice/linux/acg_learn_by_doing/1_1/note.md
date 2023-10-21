[Back to Linux Main](../main.md)

# Run a Ubuntu in Windows

* Two ways to do this
  1. Use WSL and install Ubuntu directly **(Recommended)**
  2. Install Docker Desktop for Windows and run an Ubuntu container


## 1. Use WSL
### 1.1 Install WSL
* Open the command line and install wsl
  ```
  wsl --install --web-download
  ```
  * Requirement
    * Must be Windows 11
  * WSL install is needed for running Docker Desktop as well

### 1.2 Install Ubuntu
* Open the command line and install Ubuntu
  ```
  wsl --install Ubuntu --web-download
  ```

### 1.3 Run Ubuntu
* Open the command line and run Ubuntu
  ```
  wsl --distribution Ubuntu --user [user_name]
  ```

<br><br>

## 2. Use Docker Desktop
### 1.1 Install Docker Desktop for Windows
* [Download URL](https://docs.docker.com/desktop/install/windows-install/)

### 1.2 Install WSL
* Open the command line and install wsl
  ```
  wsl --install --web-download
  ```

## 1.3. In Docker
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