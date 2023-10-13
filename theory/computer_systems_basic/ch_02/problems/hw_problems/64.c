#include <stdio.h>

int any_odd_one(unsigned x){
    return (0xaaaaaaaa & x) || 0;
}

int main(){
    printf("%d\n", any_odd_one(0));
    printf("%d\n", any_odd_one(1));
    printf("%d\n", any_odd_one(2));
    printf("%d\n", any_odd_one(0x80000000));
    printf("%d\n", any_odd_one(0x00010000));
}