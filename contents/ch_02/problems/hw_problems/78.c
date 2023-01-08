#include <stdio.h>

int mul3div4(int x){
    return (x >> 1) + (x >> 2);
}

int main() {
    printf("%d\n", mul3div4(12));
    printf("%d\n", mul3div4(0x7fffffff));
    printf("%d\n", 0x7fffffff / 4 * 3);
}