#include <stdio.h>
#include <math.h>

int main() {
    unsigned int n;
    printf("Enter number:\n");
    scanf("%u", &n);

    printf("n^2 = %lf\n", pow(n, 2));
    printf("sqrt(n) = %lf\n", sqrt(n));
    printf("n %% 7 = %d\n", n%7);

    return 0;
}

