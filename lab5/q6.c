#include <stdio.h>
#include <math.h>
#define LINE_LEN (20)

/* prints to standard output all of n's two number devidors */
void print_devidors(int n);
/* returns 1 if n is bigger of equal to 0. 0 otherwise*/
int is_positive(int n);

int main() {
    int input;

    printf("Enter number:\n");
    scanf("%d", &input);

    while (is_positive(input)) {
        print_devidors(input);

        printf("Enter number:\n");
        scanf("%d", &input);
    }

    return 0;
}

/* prints a line made of '-' sign with a length of LINE_LEN */
void print_line() {
    int i;
    for (i=0; i<LINE_LEN; i++) {
        putchar('-');
    }
    putchar('\n');
}

/* returns 1 if i devides n. 0 otherwise */
int is_devidor(int n, int i) {
    return (n%i) == 0;
}

/* prints to standard output all of n's two number devidors */
void print_devidors(int n) {
    int i;
    int square_root = (int)ceil(sqrt(n)); // check only until square root of number to avoid
                                          // printing for example when n=24:
                                          // 3*8 and 8*3

    for (i=1; i <= square_root; i++) {
        if (is_devidor(n, i)) {
            printf("%d = %d*%d\n", n, i, n/i);
        }
    }
    print_line();
}

/* returns 1 if n is bigger of equal to 0. 0 otherwise*/
int is_positive(int n) {
    return n >= 0;
}

