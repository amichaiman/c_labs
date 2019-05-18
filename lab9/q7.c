#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* splits string at given index. return value is second half of string */
char* split_array(char* str, int split_index) {
    /* allocate memory for second half (+1 for NULL terminator) */
    char* second_half = (char*) malloc((strlen(str+split_index)+1)*sizeof(char));

    /* copy second half to allocated memory */
    strcpy(second_half, str+split_index);
    /* shorten str1 to correct len */
    str[split_index] = '\0';

    return second_half;
}

int main() {
    char str[] = "Hi! i came from the zoo!";
    char* second_half;
    int split_index = 12;

    printf("Splitting the string \"%s\" at index %d\n", str, split_index);
    second_half = split_array(str, split_index);

    puts("Done. First half:");
    printf("\"%s\"\n", str);
    puts("Second half:");
    printf("\"%s\"\n", second_half);

    free(second_half);
    return 0;
}
