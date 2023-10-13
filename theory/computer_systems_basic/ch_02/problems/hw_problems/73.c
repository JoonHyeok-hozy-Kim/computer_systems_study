#include <stdio.h>

int saturating_add(int x, int y){
    int sum = x + y;
    int min = 0x80000000;

    int pos_overflow = (sum & min) && !(x & min) && !(y & min);
    int neg_overflow = !(sum & min) && (x & min) && (y & min);

    (pos_overflow && (sum = 0x7fffffff)) || (neg_overflow && (sum = min));
    return sum;
}

int main(){
    printf("%x\n", saturating_add(1, 1));
    printf("%x\n", saturating_add(1, -2));
    printf("%x\n", saturating_add(+3, -1));
    printf("%x\n", saturating_add(-4, -1));
    
    printf("%x\n", saturating_add(0x80000000, 0x80000000));
    printf("%x\n", saturating_add(0x7fffffff, 0x7fffffff));
}