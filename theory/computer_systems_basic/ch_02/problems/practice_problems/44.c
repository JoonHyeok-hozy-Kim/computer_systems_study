#include <stdio.h>

void g_test(int x, int y){
    unsigned ux = x;
    unsigned uy = y;

    printf("%d + %d = %d\n", x*~y, uy*ux, x*~y + uy*ux);
}

int main() {
    int x = (1<<29) + 2;
    printf("%d\n", x);
    printf("%d\n", x*x);

    int y = 0x80000000;
    printf("%d %d\n", y, -y);

    int a = 0x7fffffff;
    int b= 1;

    printf("%d %u\n", a+b, (unsigned) a + (unsigned) b);

    g_test(0x80000000, 0x80000000);
    g_test(0x7fffffff, 0xfffffffe);

}