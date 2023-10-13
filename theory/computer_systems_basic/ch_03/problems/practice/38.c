#include <stdio.h>

#define N 16
typedef int fix_matrix[N][N];

void fix_set_diag_opt(fix_matrix A, int val){
    int *Aptr = &A[0][0];
    int i;

    for (i=0; i<N; i++){
        *Aptr = val;
        Aptr += N;
        Aptr++;
    }
}

int main(){
    fix_matrix Arr;
    fix_set_diag_opt(Arr, 3);
    int i;
    for (i=0; i<N; i++){
        printf("%d\n", Arr[i][i]);
    }
}