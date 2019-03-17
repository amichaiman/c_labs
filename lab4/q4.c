#include <stdio.h>

int sum(int a, int b) {
    return a+b;
}

int sub(int a, int b) {
    return sum(a, -b);
}

int main() {
    int a = 6, b = 9;

    printf("%d-%d=%d", a, b, sub(a,b));
    return 0;
}

