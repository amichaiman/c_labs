#include <stdio.h>

void print_devidors(int n) {
    int i = 1;

    printf("Devidors:\n");
    while (i < n) {
        if (n % i == 0) {
            printf("%d\t", i);
        }
        i++;
    }
}

int main() {
    int input;

    printf("Enter number:\n");
    scanf("%d", &input);

    print_devidors(input);
    return 0;
}

