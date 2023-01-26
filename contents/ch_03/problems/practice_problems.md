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

### Practice Problem 3.16
![Practice Problem 3.16](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_03/problems/practice/16.png)
* Sol.
A.
```c
void cond(int a, int *p){
  if (p){
    goto done;    
  }
  if (a <= 0){
    *p += a;
  }
done:
  return;
}
```

B. Due to && operation, we should check two conditions.



### Practice Problem 3.17
![Practice Problem 3.17](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_03/problems/practice/17.png)
* Sol.
A. 
```c
int absdiff(int x, int y){
  int result;
  if (x < y){
    goto x_l_y;
  }
  result = y-x;
  goto done;
x_l_y:
  result = x-y;
done:
  return result;
}
```

B. In specific cases the result of the condition is not equivalent.


### Practice Problem 3.18
![Practice Problem 3.18](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_03/problems/practice/18.png)
* Sol
  ```c
  int test(int x, int y){
    int val = x;
    if (x+3 < 0){
      if (x - y > 0){
        val *= y;
      } else {
        val = x + y;
      }
    } else {
      if (x-2 <= 0){
        val ^= y;
      } else {
        val -= y;
      }
    }
    return val;
  }
  ```


### Practice Problem 3.19
![Practice Problem 3.19](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_03/problems/practice/19.png)
* Sol
A. 1932053504
  ```c
  #include <stdio.h>

  int main(){
      int num = 1;
      int n = 2;
      while (num < num*n){
          num *= n;
          printf("%d\n", num);
          n++;
      }

      printf("Final result : %d\n", num);
  }
  ```

B. 2432902008176640000
```c
#include <stdio.h>

int main(){
    long long lnum = 1;
    long long ln = 2;
    while (lnum < lnum*ln){
        lnum *= ln;
        printf("%lld\n", lnum);
        ln++;
    }

    printf("Final result : %lld\n", lnum);
}
```


### Practice Problem 3.20
![Practice Problem 3.20](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_03/problems/practice/20.png)
* Sol.
  1. Table
     |Register|Variable|Initially|
     |:------:|:------:|:-------:|
     |%eax|x|x|
     |%ecx|y|y|
     |%edx|n|n|
  2. 
     |Statement|C line #|Assembly line #|
     |:-------|:------:|:-------:|
     |test-expr|6|9, 11|
     |body-statement|3 ~ 5|6 ~ 7|


### Practice Problem 3.21
![Practice Problem 3.21](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_03/problems/practice/21_1.png)
![Practice Problem 3.21](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_03/problems/practice/21_2.png)
* Sol.
  1. The value of (a+b) is assigned to %edx.
  2. Table
     |Register|Variable|Initially|
     |:------:|:------:|:-------:|
     |%eax|result|1|
     |%ebx|b|b|
     |%ecx|a|a|
     |%edx|(new variable)|(a+b)|
  3. Annotated above.
  4. goto code.
     ```c
     int loop_goto(int a, int b){
      int result = 1;
      if (a < b){
        int c = a+b;
        result = 1;
      }
      loop:
        result *= c;
        a++;
        c++;
        if (b - a > 0){
          goto loop;
        }
      return result;
     }
     ```


### Practice Problem 3.22
![Practice Problem 3.22](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_03/problems/practice/22.png)
* Sol.
  1. C code
     ```c
     int fun_a(unsigned x){
      int val = 0;
      while (x > 0){
        val ^= x;
        x >>= 1;
      }
      val &= 1;
      return val;
     }
     ```
  2. If the number of ones in the binary form is odd, fun_a() returns 1. Else, it returns 0.

### Practice Problem 3.23
![Practice Problem 3.23](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_03/problems/practice/23.png)
* Sol.
  1. C code
     ```c
     int fun_b(unsigned x){
      int val = 0;
      int i;
      for (i=0; i<32; i++){
        val = (x + 1) | 2*val;
        x >>= 1;
      }
      return val;
     }
     ```
  2. fun_b() returns the reversed binary value of the input.


### Practice Problem 3.24
![Practice Problem 3.24](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_03/problems/practice/24.png)
* Sol.
  1. Do-while application.
     ```c
     int sum = 0;
     int i = -1;
     do {
      i++;
      if (i & 1){
        continue;
      }
      sum += i;
     } while (i < 10);     
     ```
  2. Safer goto version
     ```c
     int sum = 0;
     int i = -1;
     loop:
      if (i >= 10){
        goto done;
      }
      i++;
      if (i & 1){
        goto loop;
      }
      sum += i;     
     done:
     ```


### Practice Problem 3.25
![Practice Problem 3.25](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_03/problems/practice/25.png)

### Practice Problem 3.26
![Practice Problem 3.26](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_03/problems/practice/26.png)
* Sol.
  1. Division by 4. Bias, (2^k - 1), is added for the negative number case.
  2. Annotated above.

### Practice Problem 3.27
![Practice Problem 3.27](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_03/problems/practice/27.png)
* Sol.
  ```c
  int test(int x, int y){
    int val = x ^ y;
    if (y <= 0){
      if (y >= -2){
        val = 4*x;
      } else {
        val = x + y;
      }
    } else if (x < y){
      val = x - y;
    }
    return val;
  }
  ```

### Practice Problem 3.28
![Practice Problem 3.28](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_03/problems/practice/28.png)
![Practice Problem 3.28 sol](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_03/problems/practice/28_sol.png)


### Practice Problem 3.29

<table>
  <tr>
    <td>
      <img src="https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_03/problems/practice/29_1.png">
    </td>
    <td>
      <img src="https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_03/problems/practice/29_2.png">
    </td>
  </tr>
</table>



[Back to main](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study#readme)