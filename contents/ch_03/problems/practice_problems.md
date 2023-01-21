[Back to main](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study#readme)


### Practice Problem 3.1
![Practice Problem 3.1](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_03/problems/practice/01.png)

### Practice Problem 3.2
![Practice Problem 3.2](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_03/problems/practice/02.png)
* Sol.
  ```assembly
  movl %eax, (%esp)
  movw (%eax), %dx
  movb $0xFF, %bl
  movb (%esp, %edx, 4), %dh
  pushl $0xFF
  movw %dx, (%eax)
  popl %edi
  ```

### Practice Problem 3.3
![Practice Problem 3.3](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_03/problems/practice/03.png)

### Practice Problem 3.4
![Practice Problem 3.4](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_03/problems/practice/04.png)

### Practice Problem 3.5
![Practice Problem 3.5](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_03/problems/practice/05.png)
* Sol.
  ```c
  void decode1(int *xp, int *yp, int *zp){
    int a = *yp;
    int b = *zp;
    int c = *xp;
    
    *yp = c;
    *zp = a;
    *xp = b;
  }
  ```

### Practice Problem 3.6
![Practice Problem 3.6](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_03/problems/practice/06.png)

### Practice Problem 3.7
![Practice Problem 3.7](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_03/problems/practice/07.png)

### Practice Problem 3.8
![Practice Problem 3.8](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_03/problems/practice/08.png)
* Sol.
  ```assembly
  movl 8(%ebp), %eax
  sall $2, %eax

  movl 12(%ebp), %ecx
  sarl (%cl), %eax

  ```

### Practice Problem 3.9
![Practice Problem 3.9](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_03/problems/practice/09.png)

### Practice Problem 3.10
![Practice Problem 3.10](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_03/problems/practice/10.png)
* Sol.   
A. The value on %edx becomes 0.   
B.   
  ```assembly 
  movl $0, %edx 
  ```   
C.   
* "mov $0, %edx" requires 5 bytes.
  * 1 byte for "mov imm32, %edx" 
  * 4 bytes of $0 (immediate)
* "xor %edx, %edx" requires 2 bytes.
  * 1 byte for "xor r32, r/m32
  * 1 byte for operand

### Practice Problem 3.11
![Practice Problem 3.11](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_03/problems/practice/11.png)
* Sol.   
  ```assembly
  movl 8(%ebp), %eax
  xorl %edx, %edx
  divl 12(%ebp)
  movl %eax, 4(%esp)
  movl %edx, %esp
  ```

### Practice Problem 3.12
![Practice Problem 3.12](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_03/problems/practice/12.png)
![Practice Problem 3.12](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_03/problems/practice/12b.png) 

### Practice Problem 3.13
![Practice Problem 3.13](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_03/problems/practice/13.png)

### Practice Problem 3.14
![Practice Problem 3.14](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_03/problems/practice/14.png)

### Practice Problem 3.15
![Practice Problem 3.15](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_03/problems/practice/15.png)







[Back to main](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study#readme)