#include <stdio.h>

int leftmost_one(unsigned x){
    unsigned temp = x >> 1;
    unsigned result = x | temp;
    // printf("1. temp : %x / result : %x\n", temp, result);

    temp = result >> 2;
    result = result | temp;
    // printf("2. temp : %x / result : %x\n", temp, result);

    temp = result >> 4;
    result = result | temp;
    // printf("3. temp : %x / result : %x\n", temp, result);

    temp = result >> 8;
    result = result | temp;
    // printf("4. temp : %x / result : %x\n", temp, result);

    temp = result >> 16;
    result = result | temp;
    // printf("5. temp : %x / result : %x\n", temp, result);

    return (result >> 1) + (result || 0);
}


int main() {
    unsigned a;
    a = 0xffffffff;
    printf("[leftmost_one] %x -> %x\n", a, leftmost_one(a));

    a = 0x00070000;
    printf("[leftmost_one] %x -> %x\n", a, leftmost_one(a));

    a = 0xff00;
    printf("[leftmost_one] %x -> %x\n", a, leftmost_one(a));

    a = 0x6600;
    printf("[leftmost_one] %x -> %x\n", a, leftmost_one(a));

    a = 0;
    printf("[leftmost_one] %x -> %x\n", a, leftmost_one(a));
}