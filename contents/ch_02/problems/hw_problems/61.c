#include <stdio.h>

#define lst 0x00000001

int prob_a(int x){
    // int t;
    // for (t=0; t<32; t++) printf("%d ", ((x>> t) & lst));
    // printf("\n");
    return (((x>> 0) & lst) | 0) || (((x>> 1) & lst) | 0) || (((x>> 2) & lst) | 0) || (((x>> 3) & lst) | 0) || (((x>> 4) & lst) | 0) || 
           (((x>> 5) & lst) | 0) || (((x>> 6) & lst) | 0) || (((x>> 7) & lst) | 0) || (((x>> 8) & lst) | 0) || (((x>> 9) & lst) | 0) || 
           (((x>>10) & lst) | 0) || (((x>>11) & lst) | 0) || (((x>>12) & lst) | 0) || (((x>>13) & lst) | 0) || (((x>>14) & lst) | 0) || 
           (((x>>15) & lst) | 0) || (((x>>16) & lst) | 0) || (((x>>17) & lst) | 0) || (((x>>18) & lst) | 0) || (((x>>19) & lst) | 0) || 
           (((x>>20) & lst) | 0) || (((x>>21) & lst) | 0) || (((x>>22) & lst) | 0) || (((x>>23) & lst) | 0) || (((x>>24) & lst) | 0) || 
           (((x>>25) & lst) | 0) || (((x>>26) & lst) | 0) || (((x>>27) & lst) | 0) || (((x>>28) & lst) | 0) || (((x>>29) & lst) | 0) || 
           (((x>>30) & lst) | 0) || (((x>>31) & lst) | 0);
}

int prob_b(int x){
    // int t;
    // for (t=0; t<32; t++) printf("%d ", ((x>> t) & lst));
    // printf("\n");
    return (((x>> 0) & lst) & 1) && (((x>> 1) & lst) & 1) && (((x>> 2) & lst) & 1) && (((x>> 3) & lst) & 1) && (((x>> 4) & lst) & 1) && 
           (((x>> 5) & lst) & 1) && (((x>> 6) & lst) & 1) && (((x>> 7) & lst) & 1) && (((x>> 8) & lst) & 1) && (((x>> 9) & lst) & 1) && 
           (((x>>10) & lst) & 1) && (((x>>11) & lst) & 1) && (((x>>12) & lst) & 1) && (((x>>13) & lst) & 1) && (((x>>14) & lst) & 1) && 
           (((x>>15) & lst) & 1) && (((x>>16) & lst) & 1) && (((x>>17) & lst) & 1) && (((x>>18) & lst) & 1) && (((x>>19) & lst) & 1) && 
           (((x>>20) & lst) & 1) && (((x>>21) & lst) & 1) && (((x>>22) & lst) & 1) && (((x>>23) & lst) & 1) && (((x>>24) & lst) & 1) && 
           (((x>>25) & lst) & 1) && (((x>>26) & lst) & 1) && (((x>>27) & lst) & 1) && (((x>>28) & lst) & 1) && (((x>>29) & lst) & 1) && 
           (((x>>30) & lst) & 1) && (((x>>31) & lst) & 1);
}

int prob_c(int x){
    // int t;
    // for (t=0; t<8; t++) printf("%d ", ((x>> t) & lst));
    // printf("\n");
    return (((x>> 0) & lst) | 0) || (((x>> 1) & lst) | 0) || (((x>> 2) & lst) | 0) || (((x>> 3) & lst) | 0) || 
           (((x>> 4) & lst) | 0) || (((x>> 5) & lst) | 0) || (((x>> 6) & lst) | 0) || (((x>> 7) & lst) | 0);
}

int prob_d(int x){
    // int t;
    // for (t=0; t<32; t++) printf("%d ", ((x>> t) & lst));
    // printf("\n");
    return (((x>>24) & lst) & 1) && (((x>>25) & lst) & 1) && (((x>>26) & lst) & 1) && (((x>>27) & lst) & 1) && 
           (((x>>28) & lst) & 1) && (((x>>29) & lst) & 1) && (((x>>30) & lst) & 1) && (((x>>31) & lst) & 1);
           
}


int main(){
    int x;
    printf("\nprob_a\n");
    printf("%d\n", prob_a(0));
    printf("%d\n", prob_a(1));
    printf("%d\n", prob_a(0xffffffff));
    printf("%d\n", prob_a(0x80000000));
    
    printf("\nprob_b\n");
    printf("%d\n", prob_b(0));
    printf("%d\n", prob_b(1));
    printf("%d\n", prob_b(0xffffffff));
    printf("%d\n", prob_b(0x80000000));
    
    printf("\nprob_c\n");
    printf("%d\n", prob_c(0x00000000));
    printf("%d\n", prob_c(0x00000001));
    printf("%d\n", prob_c(0x000000ff));
    printf("%d\n", prob_c(0x10000100));
    
    printf("\nprob_d\n");
    printf("%d\n", prob_d(0x00000000));
    printf("%d\n", prob_d(0xff000000));
    printf("%d\n", prob_d(0x000000ff));
    printf("%d\n", prob_d(0xff000100));
}