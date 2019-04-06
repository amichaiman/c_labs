#include <stdio.h>
#include <math.h>
#define LINE_LEN (20)

void print_triangle(int a, int b);
/* returns 1 if given number is prime. 0 otherwise */
int is_prime(int n);
void print_line();

int main() {
    int a, b;

    printf("Enter 2 numbers:\n");
    scanf("%d%d", &a, &b);

    while (!is_prime(a+b)) {
        print_triangle(a, b);

        print_line();
        printf("Enter 2 numbers:\n");
        scanf("%d%d", &a, &b);
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
int is_devidor(int n, int i) {
    return !(n%i);
}

/* returns 1 if given number is prime. 0 otherwise */
int is_prime(int n) {
    int i;
    int sqrt_n = (int)ceil(sqrt(n));

    if (n == 2) {
        return 1;
    }
    if (n<2 || is_devidor(n, 2)) {
        return 0;
    }
    for (i=3; i<sqrt_n; i+=2) {
        if (is_devidor(n, i)) {
            return 0;
        }
    }
    return 1;
}

/* prints a triangle of numbers, where each line is series of numbers 
 * starting at "a"'s value and has a length of that line. 
 * for example: if a=2, b=6,
 * the triangle will look like this:
 * 2
 * 23
 * 234
 * 2345
 * 23456 */
void print_triangle(int a, int b) {
    int i, j;
    /* print a total of b-a+1 lines */
    for (i=a; i<=b; i++) {
        /* print numbers starting at "a"'s value and goes up to current lines max number */
        for (j=a; j<=i; j++) {
            printf("%d", j);
        }
        putchar('\n');
    }
 }
