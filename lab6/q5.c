#include <stdio.h>

int is_whitespace(char c) {
    return c == ' ' || c == '\n' || c == '\t';
}

int main() {
    int num_words=0;
    char current_char;
    char last_char = ' ';

    printf("Enter sentence:\n");

    while (scanf("%c", &current_char) == 1) {
        if (is_whitespace(current_char) && !is_whitespace(last_char)) {
            num_words++;
        }
        last_char = current_char;
    }

    printf("num words: %d\n", is_whitespace(current_char) ? num_words : ++num_words);

    return 0;
}

