#include <stdio.h>
#include <string.h>

void conditional_test(int val, int maxbytes){
    if (maxbytes-sizeof(val) >= 0){
        printf("Pt1-1. +\n");
    } else {
        printf("Pt1-2. -\n");
    }

    if (maxbytes-((int) sizeof(val)) >= 0){
        printf("Pt2-1. +\n");
    } else {
        printf("Pt2-2. -\n");
    }
}

void copy_int(int val, void *buf, int maxbytes) {
    if (maxbytes- ((int) sizeof(val)) >= 0)     // Cast sizeof(val) into int.
        memcpy(buf, (void *) &val, sizeof(val));
}

int main() {
    conditional_test(1, 7);
    conditional_test(1, 2);
}