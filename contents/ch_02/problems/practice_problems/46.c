#include <stdio.h>
#include <stdlib.h>

int main() {
    float a = 36000;
    int i;
    for (i=0; i<20; i++){
        a/=2;
        printf("%f\n", a);
    }
}