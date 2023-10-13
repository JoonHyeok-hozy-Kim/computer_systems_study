#include <stdio.h>

int tadd_ok(int x, int y){
    if (x < 0 && y < 0){
        if (x + y > 0){
            return 0;
        }
    } else if (x > 0 && y > 0){
        if (x + y < 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int x, y;

    x = 0x80000000; y = -1;
    printf("[tadd_ok : %d] %d + %d = %d\n", tadd_ok(x, y), x, y, x+y);

    x = 0xfffff000; y = 0xfffff123;
    printf("[tadd_ok : %d] %d + %d = %d\n", tadd_ok(x, y), x, y, x+y);

    x = 0x00000001; y = 0x00000002;
    printf("[tadd_ok : %d] %d + %d = %d\n", tadd_ok(x, y), x, y, x+y);

    x = 0x7fffffff; y = 1;
    printf("[tadd_ok : %d] %d + %d = %d\n", tadd_ok(x, y), x, y, x+y);

}