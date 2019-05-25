#include <stdio.h>

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

int main() {
    char str1[] = "hello i am here";
    char str2[] = "hello you are here";


    printf("The strings:\n\"%s\"\n\"%s\"\nare%s similar in the first %d characters\n",
            str1, str2, strings_are_similar(str1, str2, 5) ? "" : "n't", 5);

    return 0;
}

