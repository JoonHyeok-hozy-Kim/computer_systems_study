[Back to Linux Main](../main.md)

# [Red Hat/CentOS] Package Installation and Management

### Objective
- Install Available Elinks Application
- Verify Elinks Package RPM Exists

<br>

### Hands on
Situation
- Developers are having a trouble with installing elinks

<br>

Solution
- Figure out what is the problem with the elinks installation   
  ![](images/001.png)
- Try installing elinks using rpm   
  ![](images/002.png)
  - Failed due to the following two dependency.
    - libmozjs185. ~~~
    - libnss_compat_ossl. ~~~
  - Let's deal with them using yum.
- Check what yum can provide with libmozjs185*   
  ![](images/003.png)
  - It says that js is required. So let's install js.   
    ![](images/004.png)
  - Let's try installing elinks once again if the dependency is fixed.   
    ![](images/005.png)
    - Still, libnss_compat_ossl is the problem. Check with yum once again

- Check what yum can provide with libnss_compat_ossl   
  ![](images/006.png)
  - nss_compat_ossl is needed. Let's install it with yum.   
    ![](images/007.png)
- Try installing elinks with rpm again. And check if it works properly.   
  ![](images/008.png)

<br>

[Back to Linux Main](../main.md)