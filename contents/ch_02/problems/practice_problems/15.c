#include <stdio.h>

int equal(int x, int y){
    int i;
    for (i=0; i<sizeof(int); i++){
        if (x & 1<<i){
            if (y & 1<<i){
                continue;
            } else {
                return 0;
            }
        } else {
            if (y & 1<<i){
                return 0;
            } else {
                continue;
            }
        }
    }
    return 1;
}

int main() {
    printf("%d\n", equal(1, 0));
    printf("%d\n", equal(2, 2));
}