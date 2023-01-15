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


[Back to main](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study#readme)