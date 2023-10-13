#include <stdio.h>

int bis(int x, int m) {
    return x | m;
}

int bic(int x, int m){
    return x & m;
}

int bool_or(int x, int y){
    return bis(x, y);
}

int bool_xor(int x, int y){
    return ~(bis(bic(x, y), bic(~x, ~y)));
}

void print_binary(int x){
    int i;
    for (i=sizeof(x)*8-1; i>=0; i--){
        if (x & (1<<i)){
            printf("1");
        } else {
            printf("0");
        }
    }
}

int main() {
    int a = 0x7c;
    int b = 0xa1;
    printf("\na        : ");
    print_binary(a);
    printf("\nb        : ");
    print_binary(b);
    printf("\n\n");

    printf("1. OR");
    printf("\nBOOLOR : ");
    print_binary(bool_or(a, b));
    printf("\nANSWER : ");
    print_binary(a | b);
    printf("\n\n");

    printf("2. XOR");
    printf("\nBOOLXOR : ");
    print_binary(bool_xor(a, b));
    printf("\nANSWER  : ");
    print_binary(a ^ b);
    printf("\n\n");
}