#include <stdio.h>

int main() {
    printf("%d\n", -1 < 0u);
    printf("Because %d implicitly casted to %u", -1, -1);
}