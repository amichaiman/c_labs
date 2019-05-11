#include <stdio.h>

int get_min_max(int* array, int size, int* pmin, int* pmax) {
    int i;

    *pmin = *pmax = *array;

    for (i=1; i<size; i++) {
        if (*(array+i) > *pmax) {
            *pmax = *(array+i);
        }
        if (*(array+i) < *pmin) {
            *pmin = *(array+i);
        }
    }
}

void print_array(int* a, int size) {
    int i;

    for (i=0; i<size; i++) {
        printf("%4d", *(a+i));
    }
    putchar('\n');
}

int main() {
    int a[] = {1,2,3,4,5,6,7,8,9};
    int min, max;

    get_min_max(a, sizeof(a)/sizeof(a[0]), &min, &max);

    printf("Array: ");
    print_array(a, sizeof(a)/sizeof(a[0]));

    printf("Min value in array: %d\n", min);
    printf("Max value in array: %d\n", max);
    return 0;
}

