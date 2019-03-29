#include <stdio.h>
#include <math.h>

int is_prime(int n) {
    int i;

    if (n == 2) {
        return 1;
    }

    if (n < 2 || n%2==0) {
        return 0;
    }

    i = 3;
    while (i < sqrt(n)+1) {
        if (n%i == 0) {
            return 0;
        }
        i += 2;
    }
    return 1;
}

void print_primes(int n) {
    int i = 0;

    while (i < n) {
        if (is_prime(i)) {
            printf("%d\t", i);
        }
        i++;
    }
}

int is_valid(int n) {
    return n > 0;
}

int main() {
    int input;

    printf("Enter number:\n");
    scanf("%d", &input);

    if (is_valid(input)) {
        print_primes(input);
    } else {
        printf("Invalid input.\n");
    }
    return 0;
}

