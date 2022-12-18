#include <stdio.h>

void print_binary(int x){
    int i;
    for (i=sizeof(x)*8-1; i>=0; i--){
        if (x & (1<<i)){
            printf("1");
        } else {
            printf("0");
        }
    }
    printf("\n");
}

int main() {
    print_binary(~0);
    print_binary(0xFF);
    print_binary(0x89ABCDEF);
    print_binary(0x89ABCDEF & 0xFF);
}