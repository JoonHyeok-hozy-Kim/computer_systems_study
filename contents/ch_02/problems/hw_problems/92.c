#include <stdio.h>

typedef unsigned float_bits;

float_bits float_absval(float_bits f){
    unsigned exp = f >> 23 & 0xff;
    unsigned frac = f & 0x7fffff;

    if (exp == 0xff && frac != 0){
        return f;
    } else {
        // printf("%.8x\n", f);
        // printf("%.8x\n", ((f << 1) >> 1) | ~(f | 0x7fffffff));
        return f & 0x7fffffff;
    }
}

float u2f(unsigned u){
    return *((float *) &u);
}

int main(){
    unsigned u;
    float a, b;

    u = 0x40000000;
    a = u2f(u);
    b = u2f(float_absval(u));
    printf("[%d] %f vs %f (%.8x)\n", a+b==0, a, b, u);

    // for (u=0xff800001; u>=0; u--){
    //     a = u2f(u);
    //     b = u2f(float_absval(u));
    //     printf("[%d] %f vs %f (%.8x)\n", a+b==0, a, b, u);
    // }
}