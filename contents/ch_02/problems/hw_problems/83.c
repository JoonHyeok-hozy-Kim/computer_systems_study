#include <stdio.h>

unsigned f2u(float x){
    return *(unsigned*)&x;
}

int float_le(float x, float y){
    unsigned ux = f2u(x);
    unsigned uy = f2u(y);
    // printf("[float_le] ux : %.8x, uy : %.8x\n", ux, uy);
    
    unsigned sx = ux >> 31;
    unsigned sy = uy >> 31;
    // printf("[float_le] sx : %u, sy : %u\n", sx, sy);

    return (ux == 0 && uy == 0) ||
        (sx && !sy) ||
        (!sx && !sy && ux <= uy) ||
        (sx && sy && ux >= uy);
}

int main(){
    printf("%d\n", float_le(3.23, -4.33));
    printf("%d\n", float_le(-0, +0));
    printf("%d\n", float_le(+0, -0));
    printf("%d\n", float_le(0, 3));
    printf("%d\n", float_le(-4, -0));
    printf("%d\n", float_le(-4, 4));
}