#include <stdio.h>

int divide_power2(int x, int k){
    int result = x;
    (x & 0x80000000) && (result += (1 << k) - 1);
    return result >> k;
}

int main() {
    printf("%d\n", divide_power2(40, 3));
    printf("%d\n", divide_power2(-129, 1));
}