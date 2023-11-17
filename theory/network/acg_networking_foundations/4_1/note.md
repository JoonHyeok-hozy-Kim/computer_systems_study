[Back to Linux Main](../main.md)

# Finding My Network Information

### Tech) Overview commands
#### 1. IP Address
- Modern Linux
  ```
  ip address show
  ```
  - A shorter version
    ```
    ip a s
    ```
- Legacy Linux
  ```
  ifconfig
  ```

#### 2. Route 
- Modern Linux
  ```
  ip route
  ```
- Legacy Linux
  ```
  route
  ```
  ```
  netstat
  ```

#### 3. DNS 
- Modern Linux
  1. Use *nmcli*
     - Refer to [hands on](../../../../practice/linux/acg_learn_by_doing/10_1/note.md#tech-using-nmcli) for more info.
  2. View or edit */etc/resolv.conf*.

<br>



<br>

[Back to Linux Main](../main.md)