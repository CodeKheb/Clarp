#include <stdio.h>

// define new data structure
typedef struct {
    char *name;
    char *number;
} person;

int main(void) {
    // initialize 3 people
    person people[3];

    // dot operator to access variables
    people[0].name = "Kherbin";
    people[0].number= "+63-0933";

    printf("%s", people[0].name);
    printf("%s", people[0].number);
}
