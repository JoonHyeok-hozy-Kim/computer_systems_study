[Back to ACG DCA](../main.md)

# Downgrading and Upgrading the Docker Engine

## Hands on
- Check the current Docker version
  ```
  docker version
  ```

<br>

### 1. Downgrading the engine
- Stop docker
  ```
  sudo systemctl stop docker
  ```
- Remove the current docker and its cli
  ```
  sudo apt-get remove -y docker-ce docker-ce-cli
  ```
- Update the *apt-get* for sure
  ```
  sudo apt-get update
  ```
- Install the target version
  - e.g.)
    ```
    sudo apt-get install -y docker-ce=5:18.09.4~3-0~ubuntu-bionic docker-ce-cli=5:18.09.4~3-0~ubuntu-bionic
    ```

<br>

### 2. Upgrading the engine
No stop or removal required. Just install!
- Install the target version
  - e.g.)
    ```
    sudo apt-get install -y docker-ce=5:18.09.5~3-0~ubuntu-bionic docker-ce-cli=5:18.09.5~3-0~ubuntu-bionic
    ```


<br>

[Back to ACG DCA](../main.md)