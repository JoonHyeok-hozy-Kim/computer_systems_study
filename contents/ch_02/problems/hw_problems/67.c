#include <stdio.h>

int new_int_size_is_32(){
    int set_msb = 1 << 31;
    return set_msb && !(set_msb << 1);
}

int new_int_size_is_32_for_16(){
    int set_msb = 1 << 15 << 15 << 1;
    return set_msb && !(set_msb << 1);
}

int main() {
    printf("%d\n", new_int_size_is_32());
    printf("%d\n", new_int_size_is_32_for_16());
}