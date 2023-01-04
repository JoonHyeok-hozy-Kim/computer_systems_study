#include <stdio.h>

typedef unsigned char * byte_pointer;

void show_byte(byte_pointer bp, size_t len){
    size_t i;
    for (i=0; i<len; i++){
        printf("%.2x ", bp[i]);
    }
    printf("\n");
}

void show_short(short x){
    show_byte((byte_pointer) &x, sizeof(short));
}

void show_long(long x){
    show_byte((byte_pointer) &x, sizeof(long));
}

void show_long_long(long long x){
    show_byte((byte_pointer) &x, sizeof(long long));
}

void show_double(double x){
    show_byte((byte_pointer) &x, sizeof(double));
}

int main() {
    short s1 = 13;
    show_short(s1);

    long l1 = (1<<31)-1;
    show_long(l1);

    long long ll1 = (1<<31);
    show_long_long(ll1);

    double d1 = 3.14;
    show_double(d1);
}