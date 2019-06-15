#include <stdio.h>

#define EQUAL     (1)
#define NOT_EQUAL (0)
#define ROWS_A    (3)
#define COLS_A    (3)
#define ROWS_B    (3)
#define COLS_B    (3)

int compare_matrix(int a[][COLS_A], int b[][COLS_B]) {
    int i, j;

    if (ROWS_A != ROWS_B || COLS_A != COLS_B) {
        return NOT_EQUAL;
    }

    for (i=0; i<ROWS_A; i++) {
        for (j=0; j<ROWS_A; j++) {
            if (a[i][j] != b[i][j]) {
                return NOT_EQUAL;
            }
        }
    }
    return EQUAL;
}

void print_matrix(int a[][COLS_A]) {
    int i, j;

    for (i=0; i<ROWS_A; i++) {
        for (j=0; j<ROWS_A; j++) {
            printf("%5d", a[i][j]);
        }
        puts("");
    }
}

int main() {
    int a[][COLS_A] = {{1, 2, 3},
                       {4, 5, 6},
                       {7, 8, 9}};
    int b[][COLS_B] = {{1, 2, 3},
                       {4, 5, 6},
                       {7, 8, 9}};

    puts("a:");
    print_matrix(a);
    puts("b:");
    print_matrix(b);
    printf("The matrixs are%s equal\n", compare_matrix(a, b) == EQUAL ? "" : "n't");
    return 0;
}

