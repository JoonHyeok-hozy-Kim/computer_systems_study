#include <stdio.h>

int odd_ones(unsigned x){
    unsigned temp1 = x >> 16;
    unsigned temp2 = (x + temp1) & (0x0000ffff);
    temp1 = temp2 >> 8;
}