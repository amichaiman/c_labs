#include <stdio.h>

int main() {
    int dest_sum;
    int input;
    int cur_sum = 0;

    printf("Enter sum:\n");
    scanf("%d", &dest_sum);

    while (cur_sum < dest_sum) {
        printf("Enter number:\n");
        scanf("%d", &input);

        cur_sum += input;

        printf("Current sum is: %d\n", cur_sum);
    }

    printf("You have reached the destination sum!");
    return 0;
}

