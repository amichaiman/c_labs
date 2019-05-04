#include <stdio.h>

typedef enum {
    false,
    true
} boolean_t;

/* prints array to stdout */
void print_array(int a[], int size) {
    int i;

    for (i=0; i<size; i++) {
        printf("%3d", a[i]);
    }
    putchar('\n');
}

boolean_t compare_array(int a[], int b[], int size_a, int size_b) {
    if (size_a < 0 || size_b < 0 || size_a != size_b) {
        return false;
    }
    int i;
    for (i=0; i<size_a; i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int a[] = {1, 2, 3, 4, 5, 6};
    int b[] = {1, 2, 3, 4, 5, 6};
    int c[] = {1, 2, 2, 4, 5, 6};

    puts("a:");
    print_array(a, sizeof(a)/sizeof(a[0]));

    puts("b:");
    print_array(b, sizeof(b)/sizeof(b[0]));

    puts("c:");
    print_array(c, sizeof(c)/sizeof(c[0]));

    printf("a and b are%s equal\n", compare_array(a, b, sizeof(a)/sizeof(a[0]), sizeof(b)/sizeof(b[0])) == true ? "" : "n't");
    printf("a and c are%s equal\n", compare_array(a, c, sizeof(a)/sizeof(a[0]), sizeof(c)/sizeof(c[0])) == true ? "" : "n't");
    printf("b and c are%s equal\n", compare_array(b, c, sizeof(b)/sizeof(b[0]), sizeof(c)/sizeof(c[0])) == true ? "" : "n't");

    return 0;
}

