#include <stdio.h>

void print_one_to_num(int n) {
    if (n <= 0) {
        return;
    }
    print_one_to_num(n-1);
    printf("%d ", n);
}

int main() {
    int n = 15;
    printf("printing values for n=%d\n", n);
    print_one_to_num(n);
    return 0;
}

