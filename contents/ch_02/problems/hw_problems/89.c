#include <stdio.h>
int BIAS = (1 << (8 - 1)) - 1;

float u2f(unsigned x){
    float * fp = (float *) &x;
    // printf("%.8x\n", fp);
    // printf("%.8x\n", *fp);
    return *fp;
}

float fpwr2(int x){
    unsigned exp, frac;
    unsigned u;

    if (x < 1-BIAS-23){
        exp = 0;
        frac = 0;
    } else if (x < 1-BIAS-1 + 1){
        exp = 0;
        frac = (1<<22) >> (BIAS-x);
    } else if (x < (1<<8)-1 - BIAS + 1){
        exp = x + BIAS;
        frac = 0;
    } else {
        exp = 0xffffffff >> (32-8);
        frac = 0;
    }

    u = (exp << 23) | frac;
    // printf("%.8x\n", &u);
    return u2f(u);
}

int main() {
    printf("%f\n", fpwr2(5));
    printf("%f\n", fpwr2(-3));
    printf("%f\n", fpwr2(-4));
    printf("%f\n", fpwr2(-5));
    printf("%f\n", fpwr2(-6));
    printf("%f\n", fpwr2(-7));
    printf("%f\n", fpwr2(-130));
    printf("%f\n", fpwr2(-255));
    printf("%f\n", fpwr2(255-127+3));
}