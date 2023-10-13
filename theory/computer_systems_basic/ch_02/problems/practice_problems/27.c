#include <stdio.h>
#include <stdlib.h>

int uadd_ok(unsigned x, unsigned y){
    unsigned s = x + y;
    return s >= x;
}

int main(){
    unsigned ** test_cases;
    int i;
    int n = 2;
    test_cases = (unsigned **) malloc(n * sizeof(unsigned *));
    for (i=0; i<n; i++){
        test_cases[i] = (unsigned *) malloc(2 * sizeof(unsigned));
    }

    test_cases[0][0] = 1;
    test_cases[0][1] = 1;

    test_cases[1][0] = 0xffffffff;
    test_cases[1][1] = 0xf0000000;

    for (i=0; i<n; i++){
        printf("%d\n", uadd_ok(test_cases[i][0], test_cases[i][1]));
    }
}