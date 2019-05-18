#include <stdio.h>

char* my_strchr(char* str, char c) {
    while (*str) { //while we haven't reached NULL terminator
        if (*str == c) {
            return str;
        }
        str++;
    }
    return NULL;
}

int main() {
    char str[] = "hello, how are you?";
    char char_to_find = 'a';
    char* char_location;

    char_location = my_strchr(str, char_to_find);

    if (char_location) {
        printf("The character \"%c\" is in the string \"%s\" at index %ld \n", char_to_find, str, char_location-str);
    } else {
        printf("The character \"%c\" isn't in the string \"%s\"\n", char_to_find, str);
    }
    return 0;
}

