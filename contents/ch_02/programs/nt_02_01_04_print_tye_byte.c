#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, int len){
    int i;
    for (i=0; i<len; i++){
        printf(" %.2x", start[i]);  // Format : in hexadecimal with at least two digits
    }
    printf("\n");
}

void show_int(int x){
    show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x) {
    show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x){
    show_bytes((byte_pointer) &x, sizeof(void *));
}

int main() {
    int a = 12345;
    float b = 12345.0;
    int *pa = &a;

    show_int(a);
    show_float(b);
    show_pointer(pa);
    
}