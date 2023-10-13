#include <stdio.h>

int mix(int x, int y){
    int px, py;
    px = 0x000000ff & x;
    py = 0xffffff00 & y;
    return px + py;
}

int main() {
    int x, y;
    x = 0x89ABCDEF;
    y = 0x76543210;

    printf("%x", mix(x, y));
}