#include <stdio.h>
#define D  (2)
#define A1 (1)

int main() {
    int n, a = A1, sum = 0;

    printf("Enter n value:\n");
    scanf("%d", &n);

    while (n--) {
        sum += a;
        a   += D;
    }

    printf("Sum of series: %d\n", sum);

    return 0;
}
