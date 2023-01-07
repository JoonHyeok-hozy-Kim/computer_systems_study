#include <stdio.h>

/* Declaration of data type where 4 bytes are packed
into an unsigned */
typedef unsigned packed_t;

/* Extract byte from word. Return as signed integer */
int xbyte(packed_t word, int bytenum){
    int result = word << ((3 - bytenum) << 3);
    return result >> (3 << 3);
}

int main() {
    packed_t x = 0x01ff807f;
    printf("%d\n", xbyte(x, 0));
    printf("%d\n", xbyte(x, 1));
    printf("%d\n", xbyte(x, 2));
    printf("%d\n", xbyte(x, 3));
}