#include <stdio.h>

int compare_array(int a[], int b[], int size_a, int size_b) {
    if (size_a < 0 || size_b < 0 || size_a != size_b) {
        return 0;
    }
    int i;
    for (i=0; i<size_a; i++) {
        if (a[i] != b[i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int a[] = {1, 2, 3, 4, 5, 6};
    int b[] = {1, 2, 3, 4, 5, 6};
    int c[] = {1, 2, 2, 4, 5, 6};

    printf("a and b are%s equal\n", compare_array(a, b, sizeof(a)/sizeof(a[0]), sizeof(b)/sizeof(b[0])) ? "" : "n't");
    printf("a and c are%s equal\n", compare_array(a, c, sizeof(a)/sizeof(a[0]), sizeof(c)/sizeof(c[0])) ? "" : "n't");
    printf("b and c are%s equal\n", compare_array(b, c, sizeof(b)/sizeof(b[0]), sizeof(c)/sizeof(c[0])) ? "" : "n't");

    return 0;
}

