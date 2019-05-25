#include <stdio.h>

void print_num_to_one(int n) {
    if (n <= 0) {
        return;
    }
    printf("%d ", n);
    print_one_to_num(n-1);
}

int main() {
    int n = 15;
    printf("printing values for n=%d\n", n);
    print_one_to_num(n);
    return 0;
}

