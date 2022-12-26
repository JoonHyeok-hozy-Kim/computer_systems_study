#include <stdio.h>

int tadd_buggy(int x, int y){
    int sum = x+y;
    return (sum-x == y) && (sum-y == x);
}

int main(){
    int x, y;

    x = 0x80000000; y = -1;
    printf("[tadd_buggy : %d] %d + %d = %d\n", tadd_buggy(x, y), x, y, x+y);

    x = 0xfffff000; y = 0xfffff123;
    printf("[tadd_buggy : %d] %d + %d = %d\n", tadd_buggy(x, y), x, y, x+y);

    x = 0x00000001; y = 0x00000002;
    printf("[tadd_buggy : %d] %d + %d = %d\n", tadd_buggy(x, y), x, y, x+y);

    x = 0x7fffffff; y = 1;
    printf("[tadd_buggy : %d] %d + %d = %d\n", tadd_buggy(x, y), x, y, x+y);

}