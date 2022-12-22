#include <stdio.h>

typedef unsigned char * byte_pointer;

void show_byte(byte_pointer p, int len){
    int i;
    for (i=0; i<len; i++){
        printf("%.2x ", *(p+i));
    }
    printf("\n");
}

int main() {
    int x = 53191;
    short sx = (short) x;
    int y = sx;

    printf("x  : %d\t", x);
    show_byte((byte_pointer) &x, sizeof(int));
    printf("sx : %d\t", sx);
    show_byte((byte_pointer) &sx, sizeof(short));
    printf("y  : %d\t", y);
    show_byte((byte_pointer) &y, sizeof(int));
}