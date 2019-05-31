#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* reverse_string(char* s) {
    if (!s || !*s) {
        return (char*) calloc (1, sizeof(char));
    }

    char* rev_str   = reverse_string(s+1);
    int rev_str_len = strlen(rev_str);

    rev_str = (char*) realloc (rev_str, rev_str_len+2);

    if (!rev_str) {
        fprintf(stderr, "ERROR: Failed to reallocate memory!");
        exit(1);
    }

    rev_str[rev_str_len] = *s;
    rev_str[rev_str_len+1] = '\0';

    return rev_str;
}

int main() {
    char str[] = "hello";
    char* rev_str = reverse_string(str);

    printf("Reversing the string %s:\n", str);

    if (rev_str) {
        puts(rev_str);
        free(rev_str);
    }

    return 0;
}

