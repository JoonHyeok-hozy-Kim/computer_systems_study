[Back to Linux Main](../main.md)

# Storage Management

## Objective
- Managing and formatting partitions
  - GPT partition 
    - [Creating](#creating-a-gpt-partition) : gdisk
    - [Formatting](#formatting-a-gpt-partition) : xfs
  - MBR partition
    - [Creating](#creating-a-mbr-partition) : fdisk
    - [Formatting](#formatting-a-mbr-partition) : ext4

<br>

## Hands on
- Check existing disks.
  ```
  ls -la /dev | grep disk
  ```
  ![](images/001.png)

<br>

### Creating a GPT Partition
- Create a GPT partition on */dev/nvme1n1*.
  ```
  gdisk [target_disk]
  ```
  ![](images/002.png)
- Inform the OS that the partition table changed.
  ```
  partprobe
  ```
  ![](images/003.png)
  - Recommended after running a partitioning related operation
- Check the newly created disk is recognized.
  ```
  gdisk [target_disk]
  ```
  ![](images/004.png)

<br>

### Formatting a GPT Partition
- Format the GPT partition with XFS and mount on */mnt/gptxfs* persistently.
  ```
  mkfs.xfs -f [target_disk]
  ```
  ![](images/008.png)
- Get the UUID of the partition
  ```
  blkid
  ```
  ![](images/009.png)
- Edit */etc/fstab*.
  ![](images/010.png)
- Make directory and mount it.
  ```
  mkdir [target_dir]
  ```
  ```
  mount -a
  ```
  ![](images/011.png)
  - Check the result.
    ```
    mount
    ```
    ![](images/012.png)   
    ...   
    ![](images/013.png)

  

<br>

### Creating a MBR Partition
- Create a MBR partition on */dev/nvme2n1*
  ```
  fdisk [target_disk]
  ```
  ![](images/006.png)
- Inform the OS that the partition table changed.
  ```
  partprobe
  ```
- Check the result.
  ```
  gdisk [target_disk]
  ```
  ![](images/007.png)

<br>

### Formatting a MBR Partition
- Format the MBR partition with ext4 and mount it on */mnt/ext4.*
  ```
  mkfs.ext4 [target_disk]
  ```
  ![](images/014.png)
- Make target directory and mount.
  ```
  mkdir [target_dir]
  ```
  ```
  mount [target_disk] [target_dir]
  ```
  ![](images/015.png)
  - Check the result.
    ```
    mount
    ```
    ![](images/016.png)   
    ...   
    ![](images/017.png)   




<br>

[Back to Linux Main](../main.md)