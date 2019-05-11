#include <stdio.h>

int* find_value(int* a, int size, int value_to_find) {
    int i;

    for (i=0; i<size; i++) {
        if (*(a+i) == value_to_find) {
            return a+i;
        }
    }
    return NULL;
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
    int value_to_find = 2;
    int array_size = sizeof(a)/sizeof(a[0]);

    printf("Array: ");
    print_array(a, sizeof(a)/sizeof(a[0]));

    printf("The value %d is%s in array\n",
            value_to_find, find_value(a, array_size, value_to_find) == NULL ? "n't" : "");
    return 0;
}

