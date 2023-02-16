#include <stdio.h>
#include <stdlib.h>

int main()  {
    int i;
    int c;
    char *dest = malloc(sizeof(char) * 8);
    char *dest2 = dest;
    while ((c = getchar()) != '\n' && c != EOF){
        printf("%d , %c\n", c, c);
        *dest++ = c;
    }
    printf("\n\n");
    for (i=0; i<8; i++){
        printf("%d, %c\n", *dest2, *dest2);
        dest2++;
    }
}