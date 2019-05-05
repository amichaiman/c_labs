#include <stdio.h>

void fill_array(int a[], int size) {
    int i;
    for (i=0; i<size; i++) {
        printf("enter value for a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

void print_array(int a[], int size) {
    int i;
    for (i=0; i<size; i++) {
        printf("%5d", a[i]);
    }
}

int main() {
    int size;

    printf("Enter array size:\n");
    scanf("%d", &size);

    int a[size];

    fill_array (a, size);
    print_array(a, size);

    return 0;
}

