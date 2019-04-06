#include <stdio.h>

void do_something(int a, int b) {
}

int main() {
    int a=4, b=9;

    printf("Before:\n");
    printf("a:%d b:%d\n", a, b);

    do_something(a, b);

    printf("After:\n");
    printf("a:%d b:%d\n", a, b);
    return 0;
}

