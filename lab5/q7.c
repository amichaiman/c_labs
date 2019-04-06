#include <stdio.h>
#include <math.h>
#define LINE_LEN (20)

void print_triangle(int a, int b);
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
void print_triangle(int a, int b) {
    int i, j;
    for (i=a; i<=b; i++) {
        for (j=a; j<=i; j++) {
            printf("%d", j);
        }
        putchar('\n');
    }
}
