#include <stdio.h>
#include <math.h>
#define MOD_VAL 7

int main() {
    int n;

    printf("Enter number:\n");
    scanf("%d", &n);

    printf("%d^2=%g\n",n, pow(n,2));
    printf("sqrt(%d)=%g\n",n, sqrt(n));
    printf("%d%%%d=%d\n",n, MOD_VAL, n%MOD_VAL);

    return 0;
}

