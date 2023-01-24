#include <stdio.h>

int fun_a(unsigned x){
    int val = 0;
    while (x > 0){
        val ^= x;
        x >>= 1;
    }
    val &= 1;
    return val;
}

int main(){
    unsigned xx = 0;
    while (xx < 100){
        printf("%u -> %d\n", xx, fun_a(xx));
        xx++;
    }
    
}