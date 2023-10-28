[Back to Linux Main](../main.md)

# TCP Wrappers and Systemd Sockets

### Objective
* A Linux system administrator is responsible for keeping their servers secure. 
* There are a multitude of tools and software packages available to keep a networked Linux system safe from malicious intruders. 
* Learn how to use systemd socket units. 
  - Socket units only provide access to a network service when an incoming connection requests it. 
  - To further enchance the security of the service, we will apply TCP wrappers to allow incoming connections to a specified service.

<br>

### Hands on
- Verify that the *sshd.socket* unit is not working
  ```
  systemctl status sshd.socket
  ```
  ![](images/001.png)

- Run "at now" command
  ```
  sudo at now + 3 minutes
  ```
  - Why doing this?)
    - To stop *sshd.service* and start *sshd.socket*
  - Stop *sshd.service* and start *sshd.socket*
    ```
    systemctl stop sshd.service
    ```
    ```
    systemctl start sshd.socket
    ```
    - Press **ctrl + d** to stop "at now."   
  - ![](images/002.png)
- Check if the *sshd.socket* is active now.
  ```
  systemctl status sshd.socket
  ```
  ![](images/003.png)
- Enable sshd.socket and disable sshd.service
  - why doing this?)
	- Make the switch over from sshd.service to sshd.socket PERMANENT.   
	  ![](images/004.png)
- Set up TCP Wrapper for the additional security
  - Check if the ssh server is compiled to use TCP Wrapper.   
    ![](images/005.png)
  - Permit any incoming ssh connection through network.
    - Edit /etc/hosts.allow.   
      ![](images/006.png)    
      ![](images/007.png)   
  - Set the default deny rule for TCP Wrapper to deny any other incoming connections.   
    ![](images/008.png)    
    ![](images/009.png) 

- Exit from the server. And try connecting to it via ssh.   
  ![](images/010.png) 

<br>

[Back to Linux Main](../main.md)