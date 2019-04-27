#include <stdio.h>
#include <ctype.h>

int main() {
    int sum=0;
    char c;

    printf("Enter characters (ctrl-d to quit)\n");

    while (scanf("%c", &c) == 1) {
        if (isdigit(c)) {
            sum += c-'0';
        }
    }

    printf("sum of digits: %d\n", sum);

    return 0;
}

