#include <stdio.h>

/* prints array to stdout */
void print_array(int a[], int size) {
    int i;

    for (i=0; i<size; i++) {
        printf("%3d", a[i]);
    }
    putchar('\n');
}

int is_in_array(int a[], int size, int n) {
    if (size < 0) {
        return 0;
    }
    int i;
    for (i=0; i<size; i++) {
        if (a[i] == n) {
            return i;
        }
    }
    return -1;
}

int main() {
    int a[] = {1, 2, 3, 4, 5, 6};

    puts("array:");
    print_array(a, sizeof(a)/sizeof(a[0]));

    printf("%d is%s in array\n", 2, is_in_array(a, sizeof(a)/sizeof(a[0]), 2) != -1 ? "" : "n't");
    printf("%d is%s in array\n", 9, is_in_array(a, sizeof(a)/sizeof(a[0]), 9) != -1 ? "" : "n't");

    return 0;
}

