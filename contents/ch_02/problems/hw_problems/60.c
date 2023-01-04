#include <stdio.h>

unsigned replace_byte(unsigned x, int i, unsigned char b){
    unsigned char * byte_pointer = &x;
    unsigned temp = 0xffffffff - (0x000000ff << (i*8));
    unsigned result = x & temp;
    return result + (b << (i*8));
}


int main(){
    unsigned x;
    int i;
    unsigned char b;

    x = 0x12345678;
    i = 2;
    b = 0xAB;
    printf("%x\n", replace_byte(x, i, b));

    x = 0x12345678;
    i = 0;
    b = 0xAB;
    printf("%x\n", replace_byte(x, i, b));
}