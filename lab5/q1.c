#include <stdio.h>
#include <stdlib.h>

int flip_numbers(int n) {
    int res;

    for (res=0; n > 0; n/=10) {
        res *= 10;
        res += n%10;
    }

    return res;
}

int is_valid_input(int n) {
    return n >= 0;
}

int main() {
    int input;

    printf("Enter number:\n");
    scanf("%d", &input);

    if (!is_valid_input(input)) {
        printf("Invalid input. please enter positive numbers only\n");
        exit(1);
    }

    printf("%d flipped: %d\n", input,  flip_numbers(input));
    return 0;
}

