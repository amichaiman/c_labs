#include <stdio.h>
#include <ctype.h>

int main() {
    char c;
    int i;
    int a_count = 0;
    int b_count = 0;
    int c_count = 0;
    int d_count = 0;
    int e_count = 0;

    printf("Enter characters (ctrl-d to quit)\n");

    while (scanf("%c", &c) == 1) {
        switch (tolower(c)) {
            case 'a': a_count++; break;
            case 'b': b_count++; break;
            case 'c': c_count++; break;
            case 'd': d_count++; break;
            case 'e': e_count++; break;
            default: break;
        }
    }


    for (i=0; i<='e'-'a'; i++) {
        printf("%5c", 'a'+i);
    }

    putchar('\n');
    while (a_count>0 || b_count>0 || c_count>0 || d_count>0 || e_count>0) {
        printf("%5c", a_count-- > 0 ? '*' : ' ');
        printf("%5c", b_count-- > 0 ? '*' : ' ');
        printf("%5c", c_count-- > 0 ? '*' : ' ');
        printf("%5c", d_count-- > 0 ? '*' : ' ');
        printf("%5c", e_count-- > 0 ? '*' : ' ');
        putchar('\n');
    }

    return 0;
}

