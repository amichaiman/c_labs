#include <stdio.h>
#include <math.h>

#define TRUE  (1)
#define FALSE (0)

int is_prime(int n) {
    int i, sqrt_n;

    if (n == 2) {
        return TRUE;
    }
    if (!(n%2) || n < 2) {
        return FALSE;
    }

    sqrt_n = sqrt(n);

    for (i=3; i<=sqrt_n; i+=2) {
        if (!(n%i)) {
            return FALSE;
        }
    }
}

int get_smallest_prime(int n) {
    int i, sqrt_n = sqrt(n);

    if (!(n%2)) {
        return 2;
    }

    for (i=3; i<=sqrt_n; i+=2) {
        if (!(n%i) && is_prime(i)) {
            return i;
        }
    }
    return n;
}

int prime_sum(int n) {
    if (n == 1) {
        return 0;
    }
    int smallest_prime = get_smallest_prime(n);
    return smallest_prime + prime_sum(n/smallest_prime);
}

int main() {
    int n = 126;
    printf("The prime disassembly sum of %d is %d\n", n, prime_sum(n));
    n = 2378;
    printf("The prime disassembly sum of %d is %d\n", n, prime_sum(n));
    return 0;
}

