#include <stdio.h>

int test_a(int x, int y){
    return (x<y) == (-x>-y);
}

int test_b(int x, int y){
    printf("(LHS) %.8x + %.8x = %.8x\n", ((x+y)<<4), y-x, ((x+y)<<4) + y-x);
    printf("(RHS) %.8x + %.8x = %.8x\n", 17*y, 15*x, 17*y + 15*x);
    return ((x+y)<<4) + y-x == 17*y + 15*x;
}

int test_c(int x, int y){
    return ~x + ~y + 1 == ~(x + y);
}

int test_d(int x, int y){
    unsigned ux = x;
    unsigned uy = y;
    return (ux - uy) == -(unsigned)(y-x);
}

int test_e(int x){
    return ((x >> 2) << 2) <= x;
}


int main() {
    printf("%d\n", test_a(0x80000000, 0x00000001));

    int a = ((1<<31)/17) + (1<<31)/17;
    int b = ((1<<31)%17) + ((1<<31)%17);
    printf("a : %.8x, b : %.8x\n", a, b);
    printf("%d\n", test_b(a, b));

    printf("%d\n", test_c(1, 2));
    printf("%d\n", test_c(0x7fffffff, 2));

    printf("%u\n", 1-2);
    printf("%u\n", -(unsigned)1);
    printf("%d\n", test_d(0x80000001, 2));
    printf("%d\n", test_d(0xffffffff, 0xffffffff));

    
    printf("[test E] %d\n", test_e(0x7fffffff));
    printf("[test E] %d\n", test_e(0xffffffff));
    printf("[test E] %d\n", test_e(0x80000000));
}