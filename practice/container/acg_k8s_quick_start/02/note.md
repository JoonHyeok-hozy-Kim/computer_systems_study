[Back to ACG K8s Quick Start](../main.md)

# Installation

# 1. AWS Ubuntu Install
## 1.1 AWS Settings
#### Security Group Setting
* Inbound Rule : All traffic - Any IPv4
* Outbound Rule : All traffic - Any IPv4
  
#### EC2 Configuration
* Ubuntu image
* t2.medium
  * 2CPUs / 4GB RAM
* Two instances
  * Master Node
  * Worker Node

## 1.2 For Both Master and Worker Node
* Start with the root user.
  ```
  sudo su
  ```
  ![](images/001.png)

* Disable Swap
  ```
  swapoff -a
  echo 0 > /proc/sys/vm/swappiness
  sed -e '/swap/ s/^#*/#/' -i /etc/fstab
  ```
  ![](images/002.png)

* Install Docker
  ```
  apt-get update && apt-get upgrade -y
  apt-get install apt-transport-https ca-certificates curl gnupg-agent software-properties-common
  curl -fsSL https://download.docker.com/linux/ubuntu/gpg | apt-key add -
  add-apt-repository "deb [arch=amd64] https://download.docker.com/linux/ubuntu $(lsb_release -cs) stable"
  apt-get install docker-ce
  ```
  * Check the docker status
    ```
    systemctl status docker
    ```
    ![](images/003.png)
    

## 1.3 For Master Node ONLY

## 1.4 For Worker Node ONLY


<br>

[Back to ACG K8s Quick Start](../main.md)