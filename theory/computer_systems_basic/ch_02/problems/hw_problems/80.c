#include <stdio.h>

int generator_a(int k){
    return 0xffffffff << k;
}

int generator_b(int k, int j){
    return (~(0xffffffff << k)) << j;
}

int main() {
    printf("%.8x\n", generator_a(12));
    printf("%.8x\n", generator_b(4, 8));
}