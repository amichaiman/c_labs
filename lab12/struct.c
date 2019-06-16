#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NAME_LEN (20)
#define EXIT         (4)
#define MAX_NUM_DOGS (5)

typedef enum {
    black = 1,
    white,
    brown,
    other
} color;

typedef struct {
    int   age;
    char* name;
    color c;
} Dog;

void clear_buffer() {
    while(getchar() != '\n');
}

void add_new_dog(Dog* dogs, int* num_dogs) {
    char name_buffer[MAX_NAME_LEN+1];

    printf("Enter dog age:\n");
    scanf("%d", &(dogs[*num_dogs].age));

    /* there is an extra '\n' in the buffer */
    clear_buffer();

    printf("Enter dog name:\n");
    fgets(name_buffer, MAX_NAME_LEN+1, stdin);
    name_buffer[strcspn(name_buffer, "\n")] = '\0';
    dogs[*num_dogs].name = (char*) malloc ((strlen(name_buffer)+1)*sizeof(char));
    strcpy(dogs[*num_dogs].name, name_buffer);

    printf("Enter color:\n");
    printf("1) black\n");
    printf("2) white\n");
    printf("3) brown\n");
    printf("4) other\n");
    scanf("%d", (int*)(&dogs[*num_dogs].c));

    (*num_dogs)++;
}

void print_dog(Dog* dog) {
    puts("-------------");
    printf("age: %d\n", dog->age);
    printf("name: %s\n", dog->name);
    printf("color: %d\n", dog->c);
    puts("-------------");
}

void print_menu() {
    printf("1) add new dog\n");
    printf("2) remove dog\n");
    printf("3) change dog name\n");
    printf("4) exit\n");
    printf("5) print dog\n");
}

int main() {
    Dog dogs[MAX_NUM_DOGS];
    int num_dogs = 0;
    int input;

    print_menu();

    while ((scanf("%d", &input) == 1) && input != EXIT) {
        switch (input) {
            case 1:
                add_new_dog(dogs, &num_dogs);
                break;
            case 5: {
                int index;
                printf("Enter dog index to print:\n");
                scanf("%d", &index);
                print_dog(&dogs[index]);
            } break;
            default: break;
        }
        print_menu();
    }

    return 0;
}

