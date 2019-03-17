#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_VALUE (1000)

int main() {
    int n;
    int num_of_trys=0;

    srand(time(0));

    printf("Enter number between 1 and %d\n", MAX_VALUE);
    scanf("%d", &n);

    while ((rand()%MAX_VALUE + 1) != n) {
        num_of_trys++;
    }

    printf("It took %d random numbers to get to your choice!\n", num_of_trys);
    return 0;
}

