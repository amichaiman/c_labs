#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_RAND (1000)

int is_devided_by_three(int n) {
    if (n < 0) {
        return 0;
    }
    if (n == 0) {
        return 1;
    }
    return is_devided_by_three(n-3);
}

int main() {
    int i, n;
    srand(time(NULL));

    for (i=0; i<5; i++) {
        n = rand()%MAX_RAND;
        printf("The number %d is%s devided by 3\n", n, is_devided_by_three(n) ? "" : "n't");
    }
    return 0;
}

