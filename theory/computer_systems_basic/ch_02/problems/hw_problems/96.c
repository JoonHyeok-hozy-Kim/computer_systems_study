#include <stdio.h>


float u2f(unsigned u){
    return *((float *) &u);
}

float float_i2f(int i){
    unsigned sign = 0;
    unsigned exp;
    unsigned frac;
    int bias = (1<<7) - 1;
    unsigned result_unsigned;
    float result;
    int int_min = 0;


    if (i == 0x80000000) {
        sign |= 0x80000000;
        frac = 0;
        exp = 31 - bias;
        
    } else {    
        if (i < 0) {
            sign |= 0x80000000;
            i = ~i + 1;
        }

        unsigned j = 1 << 30;
        int cnt = 1;
        while (!(j & i)) {
            j >>= 1;
            cnt++;
        }
        // printf("cnt : %d\n", cnt);

        if (cnt < 8){
            frac = i >> (8 - cnt);
        } else if (cnt > 8){
            frac = i << (cnt - 8);
        }
        frac &= 0x7fffff;

        exp = (31 - cnt) + bias;
        exp += int_min;
        exp <<= 23;

    }
    // printf("frac : %x\n", frac);
    // printf("E : %d, exp  : %x\n", 31 - cnt, exp);    
    // printf("result : %x\n", sign | exp | frac);
    return u2f(sign | exp | frac);
}


int main() {
    printf("%f\n", float_i2f(0x70123fff));
    printf("%f\n", float_i2f(0x3fffffff));
    printf("%f\n", float_i2f(2));
    printf("%f\n", float_i2f(123456));
    printf("%f\n", float_i2f(0x80000000));
    printf("%f\n", float_i2f(0x80000000-1));
    printf("%f\n", float_i2f(0x7fffffff));
}