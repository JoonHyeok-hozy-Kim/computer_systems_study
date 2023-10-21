[Back to Linux Main](../main.md)

# SSH, Redirection, and Permissions in Linux

## Objective
* Enable SSH without a password from dev@server1 to dev@server2
* Copy all the tar files from server1 to server2
* Correctly set the umask so that new files are read/write by their owner only 
* Run the deploy script

<br><br>

## Hands on
### 1. Enable SSH without a password from dev@server1 to dev@server2

<table>
<tr align="center">
<td> Server1 </td>
<td> Server2 </td>
</tr>

<tr align="left">
<td>
Generate a ssh-key in sever1 <br>
<code> 
ssh-keygen
</code> <br>
<img src="./images/001.png">
</td>
<td>  </td>
</tr>

<tr align="left">
<td> 

<code> 

</code> 
</td>
<td>  
Get Server2's ip<br>
<code>hostname -i</code><br>
</td>
</tr>

<tr align="left">
<!-- col.1 -->
<td> 
Copy Server2's IP as the ID<br>
<code>ssh-copy-id [server2_ip] </code><br>
<img src="images/002.png">
</td>
<!-- col.2 -->
<td>  

</td>
</tr>

<tr align="left">
<!-- col.1 -->
<td> 
Test connection from server1 to sever2 via ssh.<br>
<code> ssh [server2_ip_address] </code><br>
<img src="images/003.png">
</td>
<!-- col.2 -->
<td>  

</td>
</tr>

</table><br><Br>

### 2. Copy all the tar files from server1 to server2

<table>
<tr align="center">
<td> Server1 </td>
<td> Server2 </td>
</tr>

<tr align="left">
<!-- col.1 -->
<td> 
Check the target files in server1.<br>
<code> ll </code><br>
<img src="images/004.png"><br><br>

Send the files to server2.<br>
<code> scp *.gz [server2_ip_address]:[target_dir] </code><br>
<img src="images/005.png"><br><br>

Connect to server2 directly with ssh and check the files.<br>
<code>
ssh [server2_user_name]@[server2_ip_address]  
ll
</code><br>
<img src="images/006.png">
</td>
<!-- col.2 -->
<td>  

</td>
</tr>

</table><br><br>

### 3. Correctly set the umask so that new files are read/write by their owner only.

<table>
<tr align="center">
<td> Server1 </td>
<td> Server2 </td>
</tr>

<tr align="left">
<!-- col.1 -->
<td> 

</td>
<!-- col.2 -->
<td>  
Run the tar files and log them into tar-output.log.<br>
<code> tar -xvf [target_file] >> [new_log_file] </code><br>
<img src="images/007.png"><br><br>

Check the result.<br>
<code> ll </code><br>
<img src="images/008.png"><br><br>

Check current umask and modify.<br>
<code> 
umask  
umask 0066  
</code><br>
<img src="images/009.png"><br><br>

Modify the authority of the script and check.<br>
<code> chmod +x deploy.sh   
ll</code><br>
<img src="images/010.png"><br><br>

Run the script.<br>
<img src="images/011.png">

</td>
</tr>

</table><br><br>

<br>

[Back to Linux Main](../main.md)