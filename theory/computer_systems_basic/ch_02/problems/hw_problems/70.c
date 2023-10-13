#include <stdio.h>

int fits_bits(int x, int n){
    int thirty_two = (n & 0x20) && 1;
    //printf("thirty_two : %d\n", thirty_two);
    unsigned temp = x;
    //printf("temp0 : %x\n", temp);
    temp >>= (n - thirty_two);
    //printf("temp1 : %x\n", temp);
    temp >>= thirty_two;
    //printf("temp2 : %x\n", temp);
    return !(temp && 1);
}

int main() {
    printf("%d\n", fits_bits(0, 1));
    printf("%d\n", fits_bits(31, 5));
    printf("%d\n", fits_bits(32, 5));
    printf("%d\n", fits_bits(0xffffffff, 32));
}