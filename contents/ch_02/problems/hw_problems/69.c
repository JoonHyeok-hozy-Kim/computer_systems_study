#include <stdio.h>

unsigned rotate_left(unsigned x, int n){
    unsigned result = (x << n) | (x >> (sizeof(int)*8 - n));
    return result;
}

int main() {
    printf("%x\n", rotate_left(0x12345678, 4));
    printf("%x\n", rotate_left(0x12345678, 20));
    printf("%x\n", rotate_left(0x12345678, 0));
}