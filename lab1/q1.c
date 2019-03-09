#include <stdio.h>
#define THIS_YEAR 2019

int main() {
    int age;

    printf("enter age: ");
    scanf("%d", &age);
    printf("birth year: %d\n", THIS_YEAR-age);

    return 0;
}

