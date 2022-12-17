#include <stdio.h>
#include <stdlib.h>

void inplace_swap(int * x, int * y){
    printf("[inplace_swap] ");
    * y = *x ^ *y;
    * x = *x ^ *y;
    * y = *x ^ *y;
}

int main() {
    int size = 10;
    int ** pair;
    pair = (int**) malloc(size * sizeof(int*));

    int i;
    for (i=0; i<size; i++){
        pair[i] = (int*) malloc(2 * sizeof(int));
        pair[i][0] = i;
        pair[i][1] = size-i;
    }
    
    for (i=0; i<size; i++){
        printf("(%d, %d) ", pair[i][0], pair[i][1]);
        inplace_swap(&(pair[i][0]), &(pair[i][1]));
        printf("(%d, %d) \n", pair[i][0], pair[i][1]);
    }
}