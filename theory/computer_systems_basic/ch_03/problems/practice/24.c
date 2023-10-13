#include <stdio.h>

int naive_do_while(){
    int sum = 0;
    int i = -1;
    do {
        i++;
        printf("Before cont\n");
        if (i & 1){
            continue;
        }
        printf("After cont\n");
        sum += i;
        printf("temp sum : %d\n", sum);
    } while (i < 10);
    printf("Outta loop\n");
    return sum;
}

int main() {
    printf("naive : %d\n", naive_do_while());
}