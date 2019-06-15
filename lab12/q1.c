#include <stdio.h>
#include <string.h>

#define MAX_NAME_LEN (20)
#define NUM_PEOPLE   (5)

typedef struct {
    char name[MAX_NAME_LEN+1];
    int age;
} Person;


Person get_person_from_input() {
    Person p;

    printf("Enter name:\n");
    fgets(p.name, MAX_NAME_LEN+1, stdin);
    p.name[strcspn(p.name, "\n")] = '\0';

    printf("Enter age:\n");
    scanf("%d", &p.age);

    return p;
}

void print_person(Person p) {
    printf("-------------------\n");
    printf("Name: %s\nAge: %d\n", p.name, p.age);
    printf("-------------------\n");
}

void celebrate_person(Person* p) {
    p->age++;
}

void swap_person(Person* p1, Person* p2) {
    Person tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

Person* youngest_person(Person* people) {
    if (!people) {
        return NULL;
    }
    Person* youngest = people; // &people[0]
    int i;

    for (i=1; i<NUM_PEOPLE; i++) {
        if (people[i].age < youngest->age) {
            youngest = people + i;
        }
    }
    return youngest;
}

void print_people(Person* people) {
    int i;
    for (i=0; i<NUM_PEOPLE; i++) {
        print_person(people[i]);
    }
}


void sort_person_array(Person* people) {
    int i, j;

    for (i = NUM_PEOPLE; i > 1; i--) {
        for (j=0; j<i-1; j++) {
            if (people[j].age > people[j+1].age) {
                swap_person(&people[j], &people[j+1]);
            }
        }
    }
}


int main() {
    Person people[NUM_PEOPLE] = {{"amichai", 12},
                                 {"yossi",   13},
                                 {"dani",    14},
                                 {"haim",    11},
                                 {"rami",    17}};

    puts("Before");
    print_people(people);

    sort_person_array(people);

    puts("After");
    print_people(people);
    return 0;
}

