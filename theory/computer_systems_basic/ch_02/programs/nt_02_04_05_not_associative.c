#include <stdio.h>

void not_associative_test(float a, float b, float c, float d){
    float x, y, t;
    x = a + b + c;
    y = b + c + d;
    printf("Case 1) x = %.50f, y = %.50f\n", x, y);
    t = b + c;
    x = a + t;
    y = t + d;
    printf("Case 2) x = %.50f, y = %.50f\n", x, y);
}

int main() {
    not_associative_test(3.14, 1e10, -1e10, 2.0);

}