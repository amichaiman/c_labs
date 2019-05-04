#include <stdio.h>

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

int get_mode(int a[], int size) {
    int sorted_a[size];
    int i, most_common=a[0], most_common_count=1, cur_count=1;


    /* create sorted copy of the array */
    for (i=0; i<size; i++) {
        sorted_a[i] = a[i];
    }

    sort_array(sorted_a, size);

    /* find longest sequence of numbers. longest sequence will be the mode */
    for (i=0; i<size-1; i++) {
        if (sorted_a[i] == sorted_a[i+1]) {
            cur_count++;
        } else {
            if (cur_count > most_common_count) {
                most_common = sorted_a[i];
                most_common_count = cur_count;
            }
            cur_count = 1;
        }
    }

    return cur_count > most_common_count ? sorted_a[size-1] : most_common;
}

int main() {
    int a[] = {1, 5, 5, 1, 4, 5, 6};

    printf("array:");
    print_array(a, sizeof(a)/sizeof(a[0]));

    printf("most common number: %d\n", get_mode(a, sizeof(a)/sizeof(a[0])));

    return 0;
}

