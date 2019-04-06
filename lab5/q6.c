#include <stdio.h>
#include <math.h>
#define LINE_LEN (20)

void print_devidors(int n);
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

void print_line() {
    int i;
    for (i=0; i<LINE_LEN; i++) {
        putchar('-');
    }
    putchar('\n');
}

int is_devidor(int n, int i) {
    return (n%i) == 0;
}

void print_devidors(int n) {
    int i;
    int square_root = (int)ceil(sqrt(n));

    for (i=1; i <= square_root; i++) {
        if (is_devidor(n, i)) {
            printf("%d = %d*%d\n", n, i, n/i);
        }
    }
    print_line();
}

int is_positive(int n) {
    return n >= 0;
}

