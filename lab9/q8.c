#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_RAND (40)

int sub_set_sum(int* arr, int size, int n) {
    if (!arr || size <= 0) {
        return 0;
    }
    if (*arr == n) {
        return 1;
    }
    return sub_set_sum(arr+1, size-1, n) || (*arr < n ? sub_set_sum(arr+1, size-1, n-*arr) : 0);
}

void print_array(int* arr, int size) {
    int i;
    for (i=0; i<size; i++) {
        printf("%4d", arr[i]);
    }
    putchar('\n');
}

int main() {
    int arr[] = {3, 5, 8, 7, 9, 4};
    int arr_size = sizeof(arr)/sizeof(*arr);
    int i, n;

    srand(time(NULL));

    puts("Array:");
    print_array(arr, arr_size);

    for (i=0; i<5; i++) {
        n = rand()%MAX_RAND;
        printf("The number %d is%s a sub set sum of the array\n", n, sub_set_sum(arr, arr_size, n) ? "" : "n't");
    }
    return 0;
}

