#include <stdio.h>

typedef enum {false, true} bool;

bool address_is_in_array(int* array, int size, int* address) {
    return (address >= array) && (address < array+size);
}

int main() {
    int a[] = {1,2,3,4,5,6,7,8,9};

    printf("Address is%s in array\n",
            address_is_in_array(a, sizeof(a)/sizeof(a[0]), a+12) == true ? "" : "n't");
    return 0;
}

