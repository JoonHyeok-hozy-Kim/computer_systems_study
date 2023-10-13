#include <stdio.h>

int odd_ones(unsigned x){
    //printf("%x\n", x);
    x ^= x >> 16;
    //printf("%x\n", x);
    x ^= x >> 8;
    //printf("%x\n", x);
    x ^= x >> 4;
    //printf("%x\n", x);
    x ^= x >> 2;
    //printf("%x\n", x);
    x ^= x >> 1;
    //printf("%x\n", x);

    return x & 0x00000001;
}

int main() {
    int a;
    a = 0x01010101;
    printf("%d\n", odd_ones(a));

    a = 0x01010100;
    printf("%d\n", odd_ones(a));
}