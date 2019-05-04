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

int remove_dups(int a[], int size) {
    int i;
    int num_dups = 0;

    sort_array(a);

    for (i=0; i<size; i++) {
        if (a[i] == a[i+1]) {
            num_dups++;
            /* TODO: continue.. */
        }
    }
}

int main() {
    int a[] = {1, 5, 1, 4, 5, 6};
    return 0;
}

