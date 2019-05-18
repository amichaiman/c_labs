#include <stdio.h>
#include <string.h>

/* returns 1 if strings are similar in the first n characters */
int strings_are_similar(char* str1, char* str2, int n) {
    int i;
    for (i=0; i<n; i++) {
        if (str1[i] != str2[i]) {
            return 0;
        }
    }
    return 1;
}

char* my_strstr(char* str1, char* str2) {
    int i;
    for (i=0; i<strlen(str1)-strlen(str2); i++) {
        /* if current character is equal to first character of str2,
         * check if the next strlen(str2) characters are equal in both strings */
        if ((str1[i] == str2[0]) && strings_are_similar(str1+i, str2, strlen(str2))) {
            return str1+i;
        }
    }
    return NULL;
}

int main() {
    char str[] = "hello, how are you?";
    char sub_str[] = "how are";
    char* start_location;

    start_location = my_strstr(str, sub_str);

    if (start_location) {
        printf("The string:\n\"%s\"\nis in the string:\n\"%s\"\nstarting at index %ld \n", sub_str, str, start_location-str);
    } else {
        printf("The string \"%s\" isn't in the string \"%s\"\n", sub_str, str);
    }
    return 0;
}

