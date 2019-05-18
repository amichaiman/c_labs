#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* prints array to stdout */
void print_array(int *a, int size) {
    int i;

    for (i=0; i<size; i++) {
        printf("%3d", a[i]);
    }
    putchar('\n');
}

/* allocate array, and fill it with random numbers in given range */
int* create_random_array(int min, int max, int size) {
    int i;
    int* arr = (int*) malloc (size*sizeof(int));

    for (i=0; i<size; i++) {
        arr[i] = rand()%(max-min+1) + min;
    }
    return arr;
}

int main() {
    srand(time(NULL));

    int min=0, max=10, size=10;
    int* arr = create_random_array(min, max, size);

    print_array(arr, size);

    free(arr);
    return 0;
}

