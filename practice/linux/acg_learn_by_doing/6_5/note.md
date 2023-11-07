[Back to Linux Main](../main.md)

# GPG for File Encryption

### Concept) GNU Priavacy Guard (GPG)
- We can employ the GNU Privacy Guard, or GPG, toolset to encrypt files; and through the use of sharing public keys with other users, we can decrypt files from other people.
		
### Objective
- Create a new GPG key
- Encrypt a file and sign it
- Send that file to another user to decrypt with our public key

<br>

### Hands on
- Create a GPG key
  ```
  gpg --gen-key
  ```
  ![](images/001.png)   
  ![](images/002.png)   
  ![](images/003.png)   
  ![](images/004.png)   

<br>

- Export the key file that a user can decrypt file from the system.
  - Target User : gfreeman   
    ![](images/005.png)   
  - Mail the key to gfreeman   
    ![](images/006.png)   
    - Enter period at the end of the mail content.

<br>

- Receiving the GPG key from the other user
  - Log in with the gfreeman account
    ![](images/007.png)    
  - Generate a GPG key for gfreeman as well.
    ![](images/008.png)   
    ...   
    ![](images/009.png)   
    ...   
    ![](images/010.png)   

<br>

- Download the key sent by cloud_user via email, using the mutt program.
  ```
  mutt
  ```
  - Mutt main screen.   
    ![](images/011.png)   
  - Press Enter to see the email.     
    ![](images/012.png)   
  - Press *v* to view the attachment.     
    ![](images/013.png)   
  - Move cursor to the gfreeman.key file and press enter.     
    ![](images/014.png)   
  - Press *s* to save the file at the main directory.     
    ![](images/015.png)   
  - Press *q* to exit.     
- Check the downloaded GPG key.   
  ![](images/016.png)
- Import the public key from the user account into gfreeman's key rink.   
  ![](images/017.png)   


<br>

Let's simulate the GPG key verification.   
If a user creates a file and send it to another user, the other user can verify the creator using the GPG key

- Create a file with cloud_user account and sign it with cloud_user's private key.   
  ```
  gpg --clearsign [file_name]
  ```
  ![](images/018.png)   
  ![](images/019.png)   
- asc file has been created.   
  ![](images/020.png)
- Send the note.txt.asc to gfreeman via email.   
  ![](images/021.png)
- Login to gfreeman account and download the attached asc file from the email using mutt.   
  ![](images/022.png)   
  ![](images/023.png)   
  ![](images/024.png)   
  ![](images/025.png)   
- Verify the note.txt.asc file.
  ```
  gpg --verify [asc_file_name]
  ```
  ![](images/026.png)


<br>

Try GPG encryption.
- Copy /etc/fstab ~ and encrypt it.   
  ![](images/027.png)   
  ![](images/028.png)   
- Send email back to cloud_user attaching the created asc file.    
  ![](images/029.png)
- Download the attached file in the cloud_user.   
  ![](images/030.png)   
  ![](images/031.png)   
  ![](images/032.png)   
  ![](images/033.png)   
- Decrypt the file using the GPG key and READ it.   
  ![](images/034.png)



<br>

[Back to Linux Main](../main.md)