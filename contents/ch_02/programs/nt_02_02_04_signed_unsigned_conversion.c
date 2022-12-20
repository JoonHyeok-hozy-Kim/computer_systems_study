#include <stdio.h>

void signed_to_unsigned_test(){
    short int v = -12345;
    unsigned short uv = (unsigned short) v;
    printf("v = %d, uv = %u\n", v, uv);
}

void unsigned_to_signed_test(){
    unsigned u = 4294967295u;
    int tu = (int) u;
    printf("u = %u, tu = %d\n", u, tu);
}

int main() {
    // signed_to_unsigned_test();
    unsigned_to_signed_test();
}