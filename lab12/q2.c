#include <stdio.h>
#define MUL_TABLE_SIZE (10)

void fill_mul_table(int mul_table[][MUL_TABLE_SIZE]) {
    int i, j;

    for (i=0; i<MUL_TABLE_SIZE; i++) {
        for (j=0; j<MUL_TABLE_SIZE; j++) {
            mul_table[i][j] = (i+1)*(j+1);
        }
    }
}

void print_table(int mul_table[][MUL_TABLE_SIZE]) {
    int i, j;

    for (i=0; i<MUL_TABLE_SIZE; i++) {
        for (j=0; j<MUL_TABLE_SIZE; j++) {
            printf("%5d", mul_table[i][j]);
        }
        puts("");
    }
}

int main() {
    int mul_table[MUL_TABLE_SIZE][MUL_TABLE_SIZE];

    fill_mul_table(mul_table);
    print_table(mul_table);
    return 0;
}

