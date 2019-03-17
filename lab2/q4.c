#include <stdio.h>

int main() {

    printf("   variable  |  size in bytes\n");
    printf("-------------+-----------------\n");
    printf("char         |       %zu\n",sizeof(char));
    printf("short        |       %zu\n",sizeof(short));
    printf("int          |       %zu\n",sizeof(int));
    printf("long         |       %zu\n",sizeof(long));
    printf("float        |       %zu\n",sizeof(float));
    printf("double       |       %zu\n",sizeof(double));

    return 0;
}
