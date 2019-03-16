#include <stdio.h>

int main() {
    int i; //loop index
    int height;
    int line; //current line in piramide

    printf("Enter piramid height:\n");
    scanf("%d", &height);

    /* print first line of piramide in correct offset */
    i=0;
    while (i < height-1) {
        printf(" ");
        i++;
    }
    printf("*\n");

    /* print lines 2 up to (height-1) */
    line = 1;
    while (line < height-1) {
        /* print spaces to get to correct offset */
        i=0;
        while (i < (height-line-1)) {
            printf(" ");
            i++;
        }

        /* right side of piramide */
        printf("*");

        /* print dollars in piramide */
        i=0;
        while (i < (line*2 - 1)) {
            printf("$");
            i++;
        }

        /* left side of piramide */
        printf("*\n");

        line++;
    }
    /* print base of piramide */
    i=0;
    while (i < (height*2 - 1)) {
        printf("*");
        i++;
    }
    printf("\n");

    return 0;
}

