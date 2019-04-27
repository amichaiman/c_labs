#include <stdio.h>
#include <ctype.h>

int main() {
    char c;

    printf("Enter characters (ctrl-d to quit):\n");

    while (scanf("%c", &c) == 1) {
        if (isalpha(c)) {
            printf("%c", islower(c) ? toupper(c) : tolower(c));
        } else {
            printf("%c", c);
        }
    }
    return 0;
}

