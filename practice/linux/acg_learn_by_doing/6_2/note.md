[Back to Linux Main](../main.md)

# Compressed Files in Linux

### Objective
Dealing with various compressed files in Linux
- Compresssion Algorithms
    - gzip
    - bzip2
    - xz    
- Utilities
  - tarball
      - It uses existing compression algorithms such as gzip, bzip2, xz, etc.        
  - zcat
      - It allows reading compressed files without decompressing them.
          - gzip : zcat
          - bzip2 : bzcat
          - xz : xzcat

<br>

### Hands on
Check the original file, which is huge in size.
![](images/001.png)

There are three ways to compress and decompress.
- [Compressed Files in Linux](#compressed-files-in-linux)
    - [Objective](#objective)
    - [Hands on](#hands-on)
      - [1. Compress and decompress directly using the compression algorithms.](#1-compress-and-decompress-directly-using-the-compression-algorithms)
      - [2. Using tarball, compress and decompress files.](#2-using-tarball-compress-and-decompress-files)
      - [3. Using zcat, read a compressed file without decompressing it.](#3-using-zcat-read-a-compressed-file-without-decompressing-it)


#### 1. Compress and decompress directly using the compression algorithms.
1. gzip
   - Compress   
     ```
     gzip [file_name]
     ```
     ![](images/002.png)
   - Decompress      
     ```
     gunzip [file_name]
     ```
     ![](images/003.png)
2. bzip2
   - Compress   
     ```
     bzip2 [file_name]
     ```
     ![](images/004.png)
   - Decompress      
     ```
     bunzip2 [file_name]
     ```
     ![](images/005.png)
3. xz
   - Compress   
     ```
     xz [file_name]
     ```
   - Decompress      
     ```
     unxz [file_name]
     ```
     ![](images/006.png)

<br>

#### 2. Using tarball, compress and decompress files.
- tarball compression options
  ![](images/007.png)
- Trial
  - gzip
    ![](images/009.png)
  - bzip2
    ![](images/010.png)
  - xz
    ![](images/011.png)

<br>

#### 3. Using zcat, read a compressed file without decompressing it.
- Trial
  - Compress a file using tarball into gzip.   
    ![](images/012.png)
  - Read it with zcat.   
    ![](images/013.png)


<br>

[Back to Linux Main](../main.md)