#include <stdio.h>
#include <stdlib.h>

// 12345 ----> 54321
// to get right-most digit : %10
// to remove right-most digit : /10
//
//  n = 12345
//  result = 5
//
//  n = 1234
//  result = 54
//
//  n = 123
//  result = 543
//
//  n = 12
//  result = 5432
//
//  n = 1
//  result = 54321
//
//
int flip_numbers(int n) {
    int result;

    /* for syntax */
//    for (<first>;<second>;<third>)
//
//    first: happends once, before loop
//    second: will enter loop if is true
//    third: happends every end of loop
//
//    for (result=0; n > 0; n /= 10) {
//        result *= 10;   // make room for new digit
//        result += n%10; //add right-most digit of n
//    }
    /* while syntax*/
    result = 0;
    while (n > 0) {
        result *= 10;   // make room for new digit
        result += n%10; //add right-most digit of n
        n /= 10;
    }
    return result;
}

int main() {
    int input;

    printf("Enter positive number:\n");
    scanf("%d", &input);

    if (input < 0) {
        printf("Invalid input. exiting.\n");
        exit(1);
    }

    printf("%d flipped: %d\n", input, flip_numbers(input));
    return 0;
}
