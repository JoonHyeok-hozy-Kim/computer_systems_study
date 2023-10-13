#include <stdio.h>

float buggy_sum_elements(float a[], unsigned length){
    int i;
    float result = 0;

    for (i=0; i<= length-1; i++){
        printf("%d ", i);
        result += a[i];
    }
    printf("\nEnd Loop\n");

    return result;
}

float sum_elements(float a[], unsigned length){
    int i;
    float result = 0;

    for (i=0; i< (int) length-1; i++){  // length casted into signed!
        printf("%d ", i);
        result += a[i];
    }

    printf("\nEnd Loop\n");
    return result;
}

int main(){

    float A[0] = {};

    // printf("%f\n", buggy_sum_elements(A, 0));
    printf("%f\n", sum_elements(A, 0));

}