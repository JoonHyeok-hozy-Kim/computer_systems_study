#include <stdio.h>

void prob_a(int x){
    double dx = (double) x;
    printf("A. x : %d, result : %d (%lf vs %lf)\n", x, (float) x == (float) dx, (float) x, (float) dx);
}

void prob_b(int x, int y){
    double dx = (double) x;
    double dy = (double) y;
    printf("B. x : %d, y : %d, result : %d (%lf vs %lf)\n", x, y, dx-dy == (double) (x-y), dx-dy, (double) (x-y));
}

void prob_c(int x, int y, int z){
    double dx = (double) x;
    double dy = (double) y;
    double dz = (double) z;
    printf("C. x : %d, y : %d, z : %d\n", x, y, z);
    printf(" -> result : %d (%lf vs %lf)\n", ((dx+dy)+dz == dx+(dy+dz)), (dx+dy)+dz, dx+(dy+dz));
}

void prob_d(int x, int y, int z){
    double dx = (double) x;
    double dy = (double) y;
    double dz = (double) z;
    printf("D. x : %d, y : %d, z : %d\n", x, y, z);
    printf(" -> result : %d (%lf vs %lf)\n", (dx*dy)*dz == dx*(dy*dz), (dx*dy)*dz, dx*(dy*dz));
}

void prob_e(int x, int y){
    double dx = (double) x;
    double dy = (double) y;
    printf("B. x : %d, y : %d, result : %d (%lf vs %lf)\n", x, y, dx/dx == dy/dy, dx/dx, dy/dy);
}


int main() {
    prob_a(0x7fffffff);
    prob_b(0x80000000 - 1, 1<<31);
    prob_c(3, 0x80000000-1, 0x80000001);
    prob_d((1<<30)+1, (1<<23)+1, (1<<24)+1);
    prob_d((1<<30)+1, (1<<23)+1, (1<<24));
    prob_e(1, -1);
    prob_e(1, 0);
}