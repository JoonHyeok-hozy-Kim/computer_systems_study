# Installing and Basic Usage of LXC/LXD

### Installing LXC/LXD.
* Determine our OS.   
  ![](../images/030301.png)
* Install lxd (but already installed in Ubuntu)   
  ![](../images/030302.png)
    * When tried with Ubuntu 22, the command was different
	  ```
      sudo apt install lxd-installer
      ```

<br>

### Initialize lxd   
  ![](../images/030303.png)

<br>

### Container 1 : alpine
* Launch an alpine image with an alias "my-alpine"   
  ![](../images/030304.png)
* Check my-alpine using lxc list   
  ![](../images/030305.png)
* Create hello.txt file in my-alpine. Since alpine is compact, it does not support bash. Use ash instead.   
  ![](../images/030306.png)

<br>

### Container 2 : Ubuntu
* Launch an Ubuntu image      
  ![](../images/030307.png)
  * Default alias of "divine-spaniel" is assigned
* Again list and check the images      
  ![](../images/030308.png)
* remote list command provides more details      
  ![](../images/030309.png)
* Run ls command in divine-spaniel but cannot find hello.txt   
  ![](../images/030310.png)
