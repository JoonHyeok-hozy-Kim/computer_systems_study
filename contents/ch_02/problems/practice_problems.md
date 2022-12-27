[Back to main](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study#readme)


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



### Practice Problem 2.13
![](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems/13.png)
* Sol.)

```C
#include <stdio.h>

int bis(int x, int m) {
    return x | m;
}

int bic(int x, int m){
    return x & m;
}

int bool_or(int x, int y){
    return bis(x, y);
}

int bool_xor(int x, int y){
    return ~(bis(bic(x, y), bic(~x, ~y)));
}

void print_binary(int x){
    int i;
    for (i=sizeof(x)*8-1; i>=0; i--){
        if (x & (1<<i)){
            printf("1");
        } else {
            printf("0");
        }
    }
}

int main() {
    int a = 0x7c;
    int b = 0xa1;
    printf("\na        : ");
    print_binary(a);
    printf("\nb        : ");
    print_binary(b);
    printf("\n\n");

    printf("1. OR");
    printf("\nBOOLOR : ");
    print_binary(bool_or(a, b));
    printf("\nANSWER : ");
    print_binary(a | b);
    printf("\n\n");

    printf("2. XOR");
    printf("\nBOOLXOR : ");
    print_binary(bool_xor(a, b));
    printf("\nANSWER  : ");
    print_binary(a ^ b);
    printf("\n\n");
}
```


### Practice Problem 2.14
![](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems/14.png)


### Practice Problem 2.15
![](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems/15.png)
* Sol.

```C
#include <stdio.h>

int equal(int x, int y){
    int i;
    for (i=0; i<sizeof(int); i++){
        if (x & 1<<i){
            if (y & 1<<i){
                continue;
            } else {
                return 0;
            }
        } else {
            if (y & 1<<i){
                return 0;
            } else {
                continue;
            }
        }
    }
    return 1;
}

int main() {
    printf("%d\n", equal(1, 0));
    printf("%d\n", equal(2, 2));
}
```

### Practice Problem 2.16
![](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems/16.png)

### Practice Problem 2.17
![](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems/17.png)

### Practice Problem 2.18
![](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems/18.png)

### Practice Problem 2.19
![](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems/19.png)

### Practice Problem 2.21
![](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems/21.png)

### Practice Problem 2.22
![](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems/22.png)

### Practice Problem 2.23
![](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems/23.png)
![](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems/23_sol.png)

### Practice Problem 2.24
![](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems/24.png)

### Practice Problem 2.25
![](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems/25.png)
* Analysis.)
  * In the loop condition, there is a comparison operation between signed and unsigned integers.
    * i <= length -1
    * where i is signed and length is unsigned.
  * Thus, i, which was initially a signed integer, implicitly casted to unsigned.
  * Considering that length is zero, the expression goes : i <= -1.
  * Recall that T2U(-1) = UMax.
  * Therefore, a memory error occurred.
* Sol.) Cast length into signed.
  
```C
#include <stdio.h>

float buggy_sum_elements(float a[], unsigned length){
    int i;
    float result = 0;

    for (i=0; i<= length-1; i++){
        printf("%d ", i);
        result += a[i];
    }
    printf("\nEnd Loop\n");

    return result;
}

float sum_elements(float a[], unsigned length){
    int i;
    float result = 0;

    for (i=0; i< (int) length-1; i++){  // length casted into signed!
        printf("%d ", i);
        result += a[i];
    }

    printf("\nEnd Loop\n");
    return result;
}

int main(){

    float A[0] = {};

    // printf("%f\n", buggy_sum_elements(A, 0));
    printf("%f\n", sum_elements(A, 0));

}
```

### Practice Problem 2.26
![](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems/26.png)
* Sol.)
  * size_t is defined as an unsigned int as follows.

<p align="left">
  <img src="https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems/26_size_t_def.png" width="40%">
</p>

A. When strlen(s) < strlen(t)  
B. An negative integer will appear, but it will be interpreted as an non-negative integer. Thus, the final return will be none-zero.  
C. Cast size_t into signed integers.  
```C
#include <stdio.h>
#include <string.h>

int strlonger_wrong(char *s, char *t){
    return strlen(s) - strlen(t) > 0;
}

int strlonger(char *s, char *t){
    return (int)strlen(s) - (int)strlen(t) > 0;
}

int main() {
    char *a = "abc";
    char *b = "eeee";

    printf("%d\n", strlonger_wrong(a, b));
    printf("%d\n", strlonger(a, b));
}
```

### Practice Problem 2.27
![](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems/27.png)
* Sol.)
```C
#include <stdio.h>
#include <stdlib.h>

int uadd_ok(unsigned x, unsigned y){
    unsigned s = x + y;
    return s >= x;
}

int main(){
    unsigned ** test_cases;
    int i;
    int n = 2;
    test_cases = (unsigned **) malloc(n * sizeof(unsigned *));
    for (i=0; i<n; i++){
        test_cases[i] = (unsigned *) malloc(2 * sizeof(unsigned));
    }

    test_cases[0][0] = 1;
    test_cases[0][1] = 1;

    test_cases[1][0] = 0xffffffff;
    test_cases[1][1] = 0xf0000000;

    for (i=0; i<n; i++){
        printf("%d\n", uadd_ok(test_cases[i][0], test_cases[i][1]));
    }
}
```

### Practice Problem 2.28
![](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems/28.png)


### Practice Problem 2.29
![](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems/29.png)


### Practice Problem 2.30
![](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems/30.png)
* Sol.

```C
#include <stdio.h>

int tadd_ok(int x, int y){
    if (x < 0 && y < 0){
        if (x + y > 0){
            return 0;
        }
    } else if (x > 0 && y > 0){
        if (x + y < 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int x, y;

    x = 0x80000000; y = -1;
    printf("[tadd_ok : %d] %d + %d = %d\n", tadd_ok(x, y), x, y, x+y);

    x = 0xfffff000; y = 0xfffff123;
    printf("[tadd_ok : %d] %d + %d = %d\n", tadd_ok(x, y), x, y, x+y);

    x = 0x00000001; y = 0x00000002;
    printf("[tadd_ok : %d] %d + %d = %d\n", tadd_ok(x, y), x, y, x+y);

    x = 0x7fffffff; y = 1;
    printf("[tadd_ok : %d] %d + %d = %d\n", tadd_ok(x, y), x, y, x+y);

}
```


### Practice Problem 2.31
![](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems/31.png)
* Sol.)
  * "sum-x" and "sum-y" may result in overflow again.


### Practice Problem 2.32
![](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems/32.png)
* Sol
  * If y = 0x80000000, it is beyond the upper bound of the non-negative signed integer.


### Practice Problem 2.33
![](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems/33.png)


### Practice Problem 2.34
![](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems/34.png)


### Practice Problem 2.35
![](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems/35.png)

1.  

<p align="left">
  <img src="https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems/35_sol1.png" width="80%">
</p>

2. 

<p align="left">
  <img src="https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems/35_sol2.png" width="80%">
</p>

3.  

<p align="left">
  <img src="https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems/35_sol3.png" width="80%">
</p>


### Practice Problem 2.36
![](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems/36.png)
```C
#include <stdio.h>

typedef long long ll;

int tmult_ok(ll x, ll y){
    ll p = x * y;
    return p == (int) p;
}

int main() {
    ll x, y;

    x = 1; y = 2;
    printf("[tmult_ok : %d] %lld * %lld = %lld\n", tmult_ok(x, y), x, y, x*y);

    x = -10; y = -20;
    printf("[tmult_ok : %d] %lld * %lld = %lld\n", tmult_ok(x, y), x, y, x*y);

    x = 0x8000000000000000; y = 0x8000000000000001;
    printf("[tmult_ok : %d] %lld * %lld = %lld\n", tmult_ok(x, y), x, y, x*y);

    x = 0x7fffffffffffffff; y = 0x7ffffffffffffffe;
    printf("[tmult_ok : %d] %lld * %lld = %lld\n", tmult_ok(x, y), x, y, x*y);
}
```


### Practice Problem 2.37 
![](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems/37.png)  
  
A. No. The malloc function will convert asize into 32-bit integer.
B. Add exception when asize goes beyond 2^32.


### Practice Problem 2.38
![](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems/38.png)  


### Practice Problem 2.39
![](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems/39.png)  


### Practice Problem 2.40
![](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems/40.png)  


### Practice Problem 2.41
![](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems/41.png)
* Sol.)
  1. When n = m or n = m+1, choose Form A.
  2. When n > m+1, choose Form B.  
* Justification
  * Consider that 1 takes 1 or 2 shifts and one addition.
  * 2 takes 2 shifts and one subtraction.
    * Which may take (n-m+1) shifts and (n-m) additions for Form A.


### Practice Problem 2.42
![](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems/42.png)
```C
#include <stdio.h>

int div16(int x){
    int p = (x + 15) >> 4;
    p += ((x>>31)&1) - 1;
    return p;
}

void test_div16(int x){
    printf("%d / 16 = %d\n", x, div16(x));
}

int main() {
    test_div16(15);
    test_div16(16);
    test_div16(17);
    test_div16(-15);
    test_div16(-16);
    test_div16(-17);
}
```


### Practice Problem 2.43
![](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems/43.png)

### Practice Problem 2.44
![](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems/44.png)
* Sol
![](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems/44sol.png)






[Back to main](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study#readme)