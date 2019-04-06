#include <stdio.h>
#include <stdlib.h>

/* returns the given number's "opposite"
 * the "opposite" of a number is defined as the same
 * number where the order of the digits is a mirror of the original */
int flip_numbers(int n) {
    int res;

    for (res=0; n > 0; n/=10 /*trim last digit*/) {
        res *= 10;   //make room for new digit
        res += n%10; //take last digit from n
    }

    return res;
}

/* returns 1 if the given number and it's "opposite" number are the same */
int is_simmetric(int n) {
    return n == flip_numbers(n);
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

    printf("%d is%s simmetric!\n", input, is_simmetric(input) ? "" : "n't");
    return 0;
}

