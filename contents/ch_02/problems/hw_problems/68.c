#include <stdio.h>

int lower_one_mask(int n){
    int temp = 0xffffffff;
    int thirty_two = (n & 0x20) || 0;
    // printf("thirty_two : %d\n", thirty_two);
    temp <<= n - thirty_two;
    temp <<= thirty_two;
    return ~(temp);     
}

int main() {
    printf("%x\n", lower_one_mask(1));
    printf("%x\n", lower_one_mask(2));
    printf("%x\n", lower_one_mask(6));
    printf("%x\n", lower_one_mask(17));
    printf("%x\n", lower_one_mask(31));
    printf("%x\n", lower_one_mask(32));
}