Back to [Ch 2.1 Information Storages](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/notes/01.md)


### Practice Problem 2.1
![Practice Problem 2.1](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems/01.png)

### Practice Problem 2.2
![Practice Problem 2.2](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems/02.png)

### Practice Problem 2.3
![Practice Problem 2.3](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems/03.png)

### Practice Problem 2.4
![](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems/04.png)

### Practice Problem 2.5
![](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems/05.png)

[:computer: Code](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems/05.c)

### Practice Problem 2.6
![](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems/06.png)

[:computer: Code](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems/06.py)

### Practice Problem 2.7
![](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems/07.png)

[:computer: Code](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems/07.c)

### Practice Problem 2.8
![](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems/08.png)

### Practice Problem 2.9
![](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems/09-1.png)
![](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems/09-2.png)

### Practice Problem 2.10
![](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems/10.png)

* Sol.) [:computer: Code](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems/10.c)

![](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems/10-sol.png)

### Practice Problem 2.11
![](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems/11.png)

### Practice Problem 2.12
![](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems/12.png)
* Sol.)

```C
#include <stdio.h>

void problem_a(int a){
    int result = a & 0xFF;
    printf("A. : %x\n", result);
}

void problem_b(int a){
    int result = a ^ (~0);
    result &= ~(0xff);
    result |= (a & 0xff);
    printf("B. : %x\n", result);
}

void problem_c(int a){
    int result = (a | 0xff);
    printf("C. : %x\n", result);
}

int main() {
    int x = 0x87654321;

    problem_a(x);
    problem_b(x);
    problem_c(x);
}
```












Back to [Ch 2.1 Information Storages](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/notes/01.md)