#include <stdio.h>

typedef unsigned float_bits;

int float_f2i(float_bits f){
    unsigned sign = f >> 31;            //  1 digit
    unsigned exp = f >> 23 & 0xff;      //  8 digits
    unsigned frac = f & 0x7fffff;       // 23 digits
    unsigned bias = (1 << (8-1)) - 1;   // 2^(k-1) - 1

    int result;
    unsigned E = exp - bias;
    unsigned M;

    if (exp >= 0 && E < 0){
        result = 0;             // less than 1
    } else if (E >= 31){
        result = 0x80000000;    // overflow
    } else {
        M = frac | 0x800000;  // M = 1 + f
        printf("M : %x, E : %u\n", M, E);
        if (E > 23){
            result = M << (E - 23);
        } else {
            result = M >> (23 - E);
        }
    }

    return sign ? -result : result;
}

float u2f(unsigned u){
    return *((float *) &u);
}

int main(){
    unsigned u;
    float a;
    int b;

    u = 0x40000000;
    a = u2f(u);
    b = float_f2i(u);
    printf("%f -> %d (%.8x)\n", a, b, u);

    u = 0x4b7fffff;
    a = u2f(u);
    b = float_f2i(u);
    printf("%.f -> %d (%.8x)\n", a, b, u);

    u = 0xdb7fffff;
    a = u2f(u);
    b = float_f2i(u);
    printf("%.50f -> %d (%.8x)\n", a, b, u);

    // for (u=0xff800001; u>=0; u--){
    //     a = u2f(u);
    //     b = u2f(float_twice(u));
    //     printf("[%d] %f vs %f (%.8x)\n", a+b==0, a, b, u);
    // }
}