#include <stdio.h>

int rec_strlen(char* str) {
    if (!str || !(*str)) {
        return 0;
    }
    return 1 + rec_strlen(str+1);
}

int main() {
    char str[] = "hi! i am a string!";
    printf("The length of \"%s\" is %d\n", str, rec_strlen(str));
    return 0;
}

