#include <stdio.h>

int div16(int x){
    int p = (x + 15) >> 4;
    p += ((x>>31)&1) - 1;
    return p;
}

void test_div16(int x){
    printf("%d / 16 = %d\n", x, div16(x));
}

int main() {
    test_div16(15);
    test_div16(16);
    test_div16(17);
    test_div16(-15);
    test_div16(-16);
    test_div16(-17);
}