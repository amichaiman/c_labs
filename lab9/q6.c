#include <stdio.h>

void replace_char(char* str, char c1, char c2) {
    if (!str || !(*str)) {
        return;
    }

    if (*str == c1) {
        *str = c2;
    }

    replace_char(str+1, c1, c2);
}

int main() {
    char str[] = "seventeen";
    char c1 = 'e', c2 = 'a';

    puts("*******************");
    puts("Before:");
    puts(str);
    puts("*******************");


    printf("Replacing %c with %c\n", c1, c2);
    replace_char(str, c1, c2);

    puts("*******************");
    puts("After:");
    puts(str);
    puts("*******************");
    return 0;
}

