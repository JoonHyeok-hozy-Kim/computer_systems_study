[Back to Linux Overview Main](../main.md)

# Installing and Updating Software in Linux

### Concept) The Root User
- A high level of access is required to install and update SW.
- Use ```sudo```.
  - Add a user to the ```sudo``` group.
  - Add a user in a ```sudoer``` file.

<br>

### Concept) Installing and Updating in Red Hat
- Install
  - Latest distributions
    ```
    sudo dnf install [package_name]
    ```
  - CentOS 7 or earlier distributions
    ```
    sudo yum install [package_name]
    ```
- Update
  - Latest distributions
    ```
    sudo dnf update [package_name]
    ```
  - CentOS 7 or earlier distributions
    ```
    sudo yum update [package_name]
    ```

<br>

### Concept) Installing and Updating in Ubuntu/Debian
- Install
  - Update the change database first and then install.
    ```
    sudo apt update
    ```
    ```
    sudo apt install [package_name]
    ```
- Update
  - Update the change database first and then upgrade the package.
    ```
    sudo apt update
    ```
    ```
    sudo apt upgrade
    ```

<br>



<br>

[Back to Linux Overview Main](../main.md)