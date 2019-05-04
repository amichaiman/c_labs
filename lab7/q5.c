#include <stdio.h>

void print_array(int a[], int size); /* prints array to stdout */
int num_unique(int a[], int size); /* returns number of unique numbers in arrray */

int main() {
    int a[] = {1, 5, 5, 1, 4, 5, 6};
    int size_after_removing_dups;

    printf("array:");
    print_array(a, sizeof(a)/sizeof(a[0]));

    printf("number of unique numbers: %d\n", num_unique(a, sizeof(a)/sizeof(a[0])));
    return 0;
}

/* prints array to stdout */
void print_array(int a[], int size) {
    int i;

    for (i=0; i<size; i++) {
        printf("%3d", a[i]);
    }
    putchar('\n');
}

/* swaps index i and j in array */
void swap(int a[], int i, int j) {
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

/* sorts the given array using bubble sort */
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

/* shift array left starting from given index */
void shift_left(int a[], int size, int start) {
    int i;

    for (i=start; i<size-1; i++) {
        a[i] = a[i+1];
    }
}

/* sorts array and removes duplicates. return value is new array size */
int remove_dups(int a[], int size) {
    int i;

    sort_array(a, size);

    for (i=0; i<size-1; i++) {
        /* if this and following cell are the same, remove next cell and shift array left */
        while (a[i] == a[i+1]) {
            shift_left(a, size, i+1);
            size--; //update array size
        }
    }
    return size;
}

/* returns number of unique numbers in arrray */
int num_unique(int a[], int size) {
    int copy_a[size], i;

    /* create copy of the array */
    for (i=0; i<size; i++) {
        copy_a[i] = a[i];
    }

    return remove_dups(copy_a, size);
}
