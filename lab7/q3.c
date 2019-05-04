#include <stdio.h>

void print_array(int a[], int size) {
    int i;
    for (i=0; i<size; i++) {
        printf("%3d", a[i]);
    }
    putchar('\n');
}

void swap(int a[], int i, int j) {
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

void sort_array(int a[], int size) {
    int i, j;

    for (i=size-1; i>=1; i--) {
        for (j=0; j<i; j++) {
            if (a[j] > a[j+1]) {
                swap(a, j, j+1);
            }
        }
    }
}

int main() {
    int a[] = {1, 9, -2, 4, 5, 6};

    puts("before:");
    print_array(a, sizeof(a)/sizeof(a[0]));
    sort_array(a, sizeof(a)/sizeof(a[0]));
    puts("after:");
    print_array(a, sizeof(a)/sizeof(a[0]));

    return 0;
}

