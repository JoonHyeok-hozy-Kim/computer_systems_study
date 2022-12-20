#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, int len){
    int i;
    for (i=0; i<len; i++){
        printf(" %.2x", start[i]);  // Format : in hexadecimal with at least two digits
    }
    printf("\n");
}

int main() {
    short x = 12345;
    short mx = -x;

    show_bytes((byte_pointer) &x, sizeof(short));
    show_bytes((byte_pointer) &mx, sizeof(short));
}