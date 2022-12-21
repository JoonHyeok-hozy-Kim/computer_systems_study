#include <stdio.h>
#include <stdlib.h>

typedef unsigned char * byte_pointer;

void show_byte(byte_pointer p, int len){
    int i;
    for (i=0; i<len; i++){
        printf("%.2x ", p[i]);
    }
}

int fun1(unsigned word){
    return (int) ((word << 24) >> 24);
}

int fun2(unsigned word){
    return ((int) word << 24) >> 24;
}

int main() {
    unsigned* words;
    words = (unsigned*) malloc(4 * sizeof(unsigned));
    words[0] = 0x00000076;
    words[1] = 0x87654321;
    words[2] = 0x000000c9;
    words[3] = 0xedcba987;

    int i;
    for (i=0; i<4; i++){
        printf("%x\t fun1 : %d\t fun2 : %d\n", words[i], fun1(words[i]), fun2(words[i]));
    }
}