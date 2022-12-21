#include <stdio.h>

typedef unsigned char * byte_pointer;

void show_bytes(byte_pointer start, int len){
    int i;
    for (i=0; i<len; i++){
        printf(" %.2x", start[i]);  // Format : in hexadecimal with at least two digits
    }
    printf("\n");
}

int main() {
    short sx = -12345;          // -12345
    unsigned short usx = sx;    //  53191
    int x = sx;                 // -12345
    unsigned int ux = usx;      //  53191

    printf("sx = %d:\t", sx);
    show_bytes((byte_pointer) &sx, sizeof(short));
    printf("usx = %u:\t", usx);
    show_bytes((byte_pointer) &usx, sizeof(unsigned short));
    printf("\n");
    printf("x = %d:\t", x);
    show_bytes((byte_pointer) &x, sizeof(int));
    printf("ux = %u:\t", ux);
    show_bytes((byte_pointer) &ux, sizeof(unsigned int));
}