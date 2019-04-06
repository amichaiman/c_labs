#include <stdio.h>

int flip_sign(int n) {
    return -n;
}

int biggest_digit(int n) {
    int biggest;
    int negetive = n < 0;

    if (negetive) {
        n = flip_sign(n);
    }

    for (biggest=0; n > 0; n/=10) {
        if (n%10 > biggest) {
            biggest = n%10;
        }
    }

    if (negetive) {
        n = flip_sign(n);
    }

    return biggest;
}

int main() {
    int input;

    printf("Enter number:\n");
    scanf("%d", &input);

    printf("Biggest digit is %d\n", biggest_digit(input));
    return 0;
}

