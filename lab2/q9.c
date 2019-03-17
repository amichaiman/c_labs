#include <stdio.h>

int main() {
    int a, b;
    float c;

    printf("Enter two whole numbers:\n");
    scanf("%d%d", &a, &b);

    printf("Enter a whole/fraction number:\n");
    scanf("%f", &c);

    printf("%d/%d = %.2f\n", a, b, (float)a/b);
    printf("%d/%g = %.5f\n", b, c, b/c);
    printf("%d/%g = %g\n", a, c, a/c);

    return 0;
}

