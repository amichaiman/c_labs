#include <stdio.h>

int main() {
    int a,b;
    printf("enter a:\n");
    scanf("%d", &a);

    printf("enter b:\n");
    scanf("%d", &b);

    printf("%d mod %d = %d\n", a, b, a%b);
    return 0;
}
