#include <stdio.h>

unsigned srl(unsigned x, int k){
    /* Perform shift arithmetically */
    unsigned xsra = (int) x >> k;
    // printf("xsra : %x\n", xsra);

    /* Generate temp that will trim the copies of the most significant bits */
    unsigned most_significant_bit = x & (1<<(sizeof(int)*8 -1));
    // printf("most_significant_bit : %x\t", most_significant_bit);
    unsigned temp = (0 - (0 || most_significant_bit)) << (sizeof(int)*8 - k);
    // printf("temp : %x\n", temp);
    return xsra - temp;
}

int sra(int x, int k){
    /* Perform shift logically */
    int xsrl = (unsigned) x >> k;

    /* Generate temp that will trim the copies of the most significant bits */
    int most_significant_bit = x & (1<<(sizeof(int)*8 -1));
    // printf("most_significant_bit : %x, ", most_significant_bit);
    int temp = (0 - (0 || most_significant_bit)) << (sizeof(int)*8 - k);
    // printf("temp : %x\n", temp);
    return xsrl + temp;
}

int main() {
    unsigned a;
    a = 0xf1234567;
    printf("[srl test1] %x -> %x\n", a, srl(a, 8));

    a = 0x71234567;
    printf("[srl test2] %x -> %x\n", a, srl(a, 8));


    int b;
    b = 0xf1234567;
    printf("[sra test1] %x -> %x\n", b, sra(b, 8));

    b = 0x71234567;
    printf("[sra test1] %x -> %x\n", b, sra(b, 8));
}