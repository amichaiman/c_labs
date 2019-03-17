#include <stdio.h>

int sum(int a, int b) {
    return a+b;
}

int main() {
    int a = 6, b = 9;

    printf("%d+%d=%d", a, b, sum(a,b));
    return 0;
}

