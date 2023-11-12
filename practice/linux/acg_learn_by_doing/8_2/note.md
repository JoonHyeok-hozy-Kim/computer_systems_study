[Back to Linux Main](../main.md)

# CUPS Print Server

### Objective
- Install a PDF printer.
- Print a test page.
- Modify the printer and work with the print queue.

<br>

### Hands on
- Check the printers already installed
  ```
  lpstat -s
  ```
  ![](images/001.png)

- See available printer connections.
  ```
  sudo lpinfo -v
  ```
  ![](images/002.png)   
  - To set PDF printer, "file cups-pdf" must be available.
- Install CUPS.
  ```
  sudo lpadmin -p CUPS-PDF -v cups-pdf:/
  ```
  ![](images/003.png)
  - Options   
    ```-p <name>``` : Set the name of the printer   
    ```-v <type>``` : Set the connection type
- Determine what driver file to use for the printer.
  - First, query DB for the drivers.
    ```
    lpinfo --make-and-model "PDF" -m
    ```
    ![](images/004.png)
  - Next, specify the driver for the previous CUPS-PDF
    ```
    sudo lpadmin -p CUPS-PDF -m "CUPS-PDF.ppd"
    ```
    ![](images/005.png)
- Check the status of the printer that we just installed.
  ```
  lpc status
  ```
  ![](images/006.png)
- Enable the printer.
  ```
  sudo lpadmin -d CUPS-PDF -E
  ```
  ```
  sudo cupsenable CUPS-PDF
  ```
  ```
  sudo cupsaccept CUPS-PDF
  ```
  ```
  lpc status
  ```
  ![](images/007.png)

- Test Printing : Print /etc/passwd to the home directory.
  ```
  lpr /etc/passwd
  ```
  ![](images/008.png)


- Disabling the printer.
  - cf.) We should disable the printer when we don't use it.
  - Two types of Disabling
    1. Queueing Disabled : Not accepting the job
       ```
       sudo cupsreject CUPS-PDF
       ```
       ![](images/009.png)
       - We can enable anytime with the following command.
         ```
         sudo cupsaccept CUPS-PDF
         ```
    2. Printing Disabled : Accepting the job to the queue but NOT printing
       ```
       sudo cupsdisable CUPS-PDF
       ```
       - Test whether the printer is properly disabled.
         |Command|Screen Shot|Explanation|
         |:------|:----------|:----------|
         |<code>sudo cupsdisable CUPS-PDF</code><br><code>lpc status</code>|![](images/010.png)||
         |<code>lpr /etc/group</code><br><code>ls</code>|![](images/011.png)|Not printed!|
         |<code>lpq</code>|![](images/012.png)|Not printed but the job remains in the queue.|
         |<code>lprm [job_number]</code><br><code>lpq</code>|![](images/013.png)|Remove the job using the job number.|
         |<code>sudo cupsenable CUPS-PDF</code><br><code>lpq</code>|![](images/014.png)|We can always enable the printer.|



<br>

[Back to Linux Main](../main.md)