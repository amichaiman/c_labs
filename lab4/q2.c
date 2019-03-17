#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX (100)
#define MIN (1)

int main() {
    int input;
    int rand_num;
    int num_guesses = 0;

    srand(time(NULL));
    rand_num = rand()%(MAX-MIN+1) + MIN;

    printf("Enter your guess:\n");
    scanf("%d", &input);

    while (input != rand_num) {
        num_guesses++;
        if (input > rand_num) {
            printf("you guessed too high!\n");
        } else {
            printf("you guessed too low!\n");
        }
        scanf("%d", &input);
    }

    printf("You guesses correctly! the number was %d.\nit took you %d guesses\n", rand_num, num_guesses);
    return 0;
}

