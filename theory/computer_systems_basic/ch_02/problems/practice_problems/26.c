#include <stdio.h>
#include <string.h>

int strlonger_wrong(char *s, char *t){
    return strlen(s) - strlen(t) > 0;
}

int strlonger(char *s, char *t){
    return (int)strlen(s) - (int)strlen(t) > 0;
}

int main() {
    char *a = "abc";
    char *b = "eeee";

    printf("%d\n", strlonger_wrong(a, b));
    printf("%d\n", strlonger(a, b));
}