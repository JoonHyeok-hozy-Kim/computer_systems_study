#include <stdio.h>

int is_little_endian(){
    short int x = 0xff00;
    unsigned char * byte_pointer;
    byte_pointer = &x;
    // printf("%.2x\n", byte_pointer[0]);
    // printf("%d", byte_pointer[0] == 0);
    return byte_pointer[0] == 0;
}

int main() {
    printf("%d", is_little_endian());
}