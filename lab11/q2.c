#include <stdio.h>

void print_array(int* arr, int size) {
    int i;

    for (i=0; i<size; i++) {
        printf("%5d", arr[i]);
    }
    puts("");
}

int* binary_search(int* arr, int size, int n) {
    if (size <= 0) {
        return NULL;
    }

    if (n > arr[size/2]) {
        return binary_search(arr+size/2+1, size/2-1 + size%2, n);
    } else if (n < arr[size/2]) {
        return binary_search(arr, size/2, n);
    }

    return arr+size/2;
}

int main() {
    int arr[] = {1, 5, 8, 12, 17, 24, 37, 89, 100};
    int arr_size = sizeof(arr)/sizeof(*arr);
    int n = 5;

    printf("Array:\n");
    print_array(arr, arr_size);
    printf("The number %d is%s in the array!\n", n, binary_search(arr, arr_size, n) == NULL ? "n't" : "");
    n = 101;
    printf("The number %d is%s in the array!\n", n, binary_search(arr, arr_size, n) == NULL ? "n't" : "");
    return 0;
}

