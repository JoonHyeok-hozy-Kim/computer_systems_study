#include <stdio.h>
#include <inttypes.h>

int signed_high_prod(int x, int y){
    /* Assume that this function is given. */
    int64_t mul = (int64_t) x * y;
    return mul >> 32;
}

unsigned unsigned_high_prod(int x, int y){
    unsigned result = (unsigned) signed_high_prod(x, y);
    (x & 0x80000000) && (result += y);
    (y & 0x80000000) && (result += x);
    return result;
}

unsigned unsigned_high_prod_check(int x, int y){
    uint64_t mul = (uint64_t) x * y;
    return mul >> 32;
}

int main() {
    int a = 0x7fffffff;
    int b = 0x7fffffff;
    printf("%d", unsigned_high_prod(a, b) == unsigned_high_prod_check(a, b));
}