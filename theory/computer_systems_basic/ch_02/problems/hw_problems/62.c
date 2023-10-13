#include <stdio.h>

int int_shifts_are_arithmetic(){
    short int x = 0xffff;
    x >>= 1;
    x &= 0x8000;
    x >>= 7;
    x &= 1;
    return x;
}

int main() {
    printf("%x\n", (0xffffffff));
    printf("%x\n", (0xffffffff>>1));
    printf("%d\n", int_shifts_are_arithmetic());
}