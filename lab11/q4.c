#include <stdio.h>
#include <string.h>

#define FALSE (0)
#define TRUE  (1)

int is_sub_string(char* str1, char* str2) {
    if (!str1 || !str2 || !*str1 || !*str2) {
        return FALSE;
    }

    if (strncmp(str1, str2, strlen(str2)) == 0) {
        return TRUE;
    }

    return is_sub_string(str1+1, str2);
}

int main() {
    char str1[] = "i am the best string ever";
    char str2[] = "ring eve";

    printf("The string:\n\"%s\"\nis%s a substring of:\n\"%s\"\n",
            str2, is_sub_string(str1, str2) == TRUE ? "" : "n't", str1);

    return 0;
}

