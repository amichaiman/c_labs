#include <stdio.h>

#define COLS (5)
#define ROWS (5)

void print_matrix(int a[][COLS]) {
    int i, j;

    for (i=0; i<ROWS; i++) {
        for (j=0; j<ROWS; j++) {
            printf("%5d", a[i][j]);
        }
        puts("");
    }
}

int get_row_sum(int *a) {
    int i, sum = 0;
    for (i=0; i<COLS; i++) {
        sum += a[i];
    }
    return sum;
}
int biggest_row(int a[][COLS]) {
    int i;
    int current_sum;
    int largest_sum = get_row_sum(a[0]);
    int largest_sum_row_index = 0;

    for (i=1; i<ROWS; i++) {
        current_sum = get_row_sum(a[i]);
        if (current_sum > largest_sum) {
            largest_sum = current_sum;
            largest_sum_row_index = i;
        }
    }
    return largest_sum_row_index;
}

int main() {
    int a[][COLS] = {{1,5,3,6,3},
                     {3,0,0,9,3},
                     {0,2,3,7,3},
                     {4,4,4,4,4},
                     {9,8,1,0,0}};


    print_matrix(a);
    printf("row with biggest sum: %d\n", biggest_row(a));
    return 0;
}

