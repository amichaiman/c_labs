#include <stdio.h>

/* returns length in characters of given string */
int my_strlen(char* str) {
    int len=0;

    /* while null character isn't reached */
    while (*(str++)) {
        len++;
    }
    return len;
}

int main() {
    char str[] = "hello, how are you?";
    printf("\"%s\" is %d characters long\n", str, my_strlen(str));
    return 0;
}
