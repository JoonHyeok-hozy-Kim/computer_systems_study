[Back to Linux Main](../main.md)

# RPM Troubleshooting

## Objective
- Install telnet and install Apache.

<br>

## Hands on
### 1. Troubleshoot Installing Telnet
Tried to yum install telnet, but not working.
![](images/001.png)
- The error says, it could not open Packages database in */var/lib/rpm*

<br>

Let's trouble shoot rpm.
- Connect with the root user.
  ```
  sudo -i
  ```
- Go to the directory */var/lib/rpm* and check packages.
  ```
  cd /var/lib/rpm
  ```
- Run rpmdb_verify file that is located at */usr/lib/rpm/rpmdb_verify*   
  ![](images/002.png)   
  ![](images/003.png)   
  - It says that the current "Packages" cannot be verified.
- Make a backup for the current "Packages"
  ![](images/004.png)
- Run *rpmdb_dump* with the current Packages.bad and pipe it to *rpmdb_load*
  ```
  /usr/lib/rpm/rpmdb_dump Packages.bad | /usr/rpm/rpmdb_load Packages
  ```
  ![](images/005.png)
- Redo verification with the new Packages.
  ```
  /usr/lib/rpm/rpmdb_verify Packages
  ```
  ![](images/006.png)
- Rebuild the database.
  ```
  rpm -vv --rebuilddb
  ```

<br>

Try *yum install telnet* again
![](images/007.png)   
![](images/008.png)   

- Successful!

---

<br><br>

### 2. Troubleshoot Installing Apache

Let's install Apache which is httpd.
![](images/009.png)
- The message says that this repository is search disabled.

<br>

Let's check if there is a httpd related configuration in yum
![](images/010.png)
- There was a excluding config in *yum.conf*. Let's disable this.
  ```
  vim yum.conf
  ```
  ![](images/011.png)

<br>

Check if the disabling and retry installing Apache
![](images/012.png)   
![](images/013.png)


<br>

[Back to Linux Main](../main.md)