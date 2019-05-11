#include <stdio.h>

void print_array(int* a, int size) {
    int i;

    for (i=0; i<size; i++) {
        printf("%4d", *(a+i));
    }
    putchar('\n');
}

int main() {
    int a[] = {1,2,3,4,5,6,7,8,9};

    print_array(a, sizeof(a)/sizeof(a[0]));
    return 0;
}

