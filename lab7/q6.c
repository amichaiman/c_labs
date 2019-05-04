#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE (10)

/* prints array to stdout */
void print_array(int a[]) {
    int i;

    for (i=0; i<SIZE; i++) {
        printf("%3d", a[i]);
    }
    putchar('\n');
}

void fill_with_random(int a[], int min, int max) {
    int i;

    for (i=0; i<SIZE; i++) {
        a[i] = rand()%(max-min+1) + min;
    }
}

int main() {
    int a[SIZE];
    int min, max;

    srand(time(NULL));

    printf("Enter minimum value:\n");
    scanf("%d", &min);

    printf("Enter maximum value:\n");
    scanf("%d", &max);

    fill_with_random(a, min, max);

    puts("done! here is what the array looks like:");
    print_array(a);

    return 0;
}

