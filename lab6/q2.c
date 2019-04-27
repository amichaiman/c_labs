#include <stdio.h>
#include <ctype.h>

void print_latin_triangle(char c) {
    int i, j;

    if (!isalpha(c)) {
        printf("Invalid character.\n");
        return;
    }

    for (i=0; i<=tolower(c)-'a'; i++) {
        for (j=0; j<=i; j++) {
            printf("%2c", 'A' + j);
        }
        putchar('\n');
    }
}

int main() {
    char c;
    printf("Enter latin character:\n");
    scanf("%c", &c);

    print_latin_triangle(c);
    return 0;
}

