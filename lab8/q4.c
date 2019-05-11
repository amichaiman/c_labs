#include <stdio.h>

void print_array(int* array_start, int* array_end) {
    while (array_start <= array_end) {
        printf("%3d", *array_start);
        array_start++;
    }
}

int main() {
    int a[] = {1,2,3,4,5,6,7,8,9};
    int array_size = sizeof(a)/sizeof(a[0]);

    print_array(a, a+array_size-1);
    return 0;
}

