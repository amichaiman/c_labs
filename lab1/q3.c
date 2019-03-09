#include <stdio.h>
#define DOLLAR_IN_SHEKEL 3.7

int main() {
    float dollars;

    printf("Enter amount in dollars:\n");
    scanf("%f", &dollars);
    printf("amount of %g in shekels is %g\n", dollars, dollars*DOLLAR_IN_SHEKEL);

    return 0;
}
