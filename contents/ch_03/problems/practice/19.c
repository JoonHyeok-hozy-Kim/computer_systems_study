#include <stdio.h>

int main(){
    int num = 1;
    int n = 2;
    while (num < num*n){
        num *= n;
        printf("%d\n", num);
        n++;
    }

    printf("Final result : %d\n", num);


    long long lnum = 1;
    long long ln = 2;
    while (lnum < lnum*ln){
        lnum *= ln;
        printf("%lld\n", lnum);
        ln++;
    }

    printf("Final result : %lld\n", lnum);

}

