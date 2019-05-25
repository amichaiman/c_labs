#include <stdio.h>

int biggest_digit(int n) {
    if (n <= 0) {
        return 0;
    }
    int current_biggest_digit = biggest_digit(n/10);

    return n%10 > current_biggest_digit ? n%10 : current_biggest_digit;
}

int main() {
    int n = 16347293;

    printf("The biggest digit in %d is %d\n", n, biggest_digit(n));
    return 0;
}

