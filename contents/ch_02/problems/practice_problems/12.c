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