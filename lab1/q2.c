#include <stdio.h>

int main() {
    float a, b, c;

    printf("enter three numbers:\n");
    scanf("%f%f%f", &a, &b, &c);
    printf("sum is %g\n", (a+b+c)/3);

    return 0;
}
