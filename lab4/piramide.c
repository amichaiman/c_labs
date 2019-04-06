#include <stdio.h>
#define MIN_HEIGHT (2)
/*
 * piramide with hight 5:
            line | spaces | astrixs|spaces
*********   0    --> astrix*9
*   *   *   1    |   3    |   1    |  3  | (height-1)-line
*  ***  *   2    |   2    |   3    |  2  | (height-1)-line
* ***** *   3    |   1    |   5    |  1
*********   4    --> astrix*9

0  ***********
1  *    *    *  1
2  *   ***   *  3
3  *  *****  *  5
4  * ******* *  7
5  ***********

0  ***************
1  *      *      *  1
2  *     ***     *  3
3  *    *****    *  5
4  *   *******   *  7
5  *  *********  *  9
6  * *********** * 11
6  ***************




*/

void print_astrixs(int n);
void print_spaces(int n);

int main() {
    int height;
    int i;

    printf("Enter height (bigger than %d):\n", MIN_HEIGHT);
    scanf("%d", &height);

    while (height <= MIN_HEIGHT) {
        printf("Invalid input. try again:\n");
        scanf("%d", &height);
    }

    print_astrixs(height*2-1);
    printf("\n");

    /* print body of piramide */
    for (i=1; i < height-1; i++) {
        print_astrixs(1);
        print_spaces(height-1-i);

        print_astrixs(i*2-1);

        print_spaces(height-1-i);
        print_astrixs(1);
        printf("\n");
    }

    print_astrixs(height*2-1);
    printf("\n");

    return 0;
}

void print_astrixs(int n) {
    int i;
    for (i=0; i<n; i++) {
        printf("*");
    }
}

void print_spaces(int n) {
    int i;
    for (i=0; i<n; i++) {
        printf(" ");
    }
}

