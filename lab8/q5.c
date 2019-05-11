#include <stdio.h>

void swap(float* a, float* b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    float a=5, b=9;

    printf("Before\n");
    printf("a:%f\nb:%f\n", a, b);

    swap(&a, &b);

    printf("After\n");
    printf("a:%f\nb:%f\n", a, b);
    return 0;
}

