#include <stdio.h>

int my_strcmp(char* str1, char* str2) {
    /* continue comparing while strings are similar and we haven't reached end of one of the strings */
    while (*str1 && *str2 && *str1 == *str2) {
        str1++;
        str2++;
    }
    /* return distance between last char reached */
    return *str1-*str2;
}

/* prints strings and whether or not they are equal */
void print_compare(char* str1, char* str2) {
    int res;
    printf("The string:\n\"%s\"\nis %s the string:\n\"%s\"\n",
            str1, (res=my_strcmp(str1, str2)) == 0 ? "equal to" : res > 0 ? "bigger than" : "smaller than", str2);
}

int main() {
    char str1[] = "hi";
    char str2[] = "bye";

    print_compare(str1, str1);
    puts("");
    print_compare(str1, str2);

    return 0;
}

