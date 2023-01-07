#include <stdio.h>

int tsub_ok(int x, int y){
    int sub = x - y;
    int min = 0x80000000;

    int pos_overflow = (x & min) && !(y & min) && !(sub & min);
    int neg_overflow = !(x & min) && (y & min) && (sub & min);

    int result = 1;
    (pos_overflow || neg_overflow) && (result = 0);
    return result;
}

int main() {
    printf("%d\n", tsub_ok(10, 3));
    printf("%d\n", tsub_ok(-5, 3));
    
    printf("%d\n", tsub_ok(0x80000000, 1));
    printf("%d\n", tsub_ok(0x7fffffff, -1));
}