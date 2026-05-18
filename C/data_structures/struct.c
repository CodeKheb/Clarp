#include <stdio.h>
#include <string.h>

// define new data structure
typedef struct {
    char *name;
    char *number;
} person;

int main(void) {
    // initialize amount of people
    person people[4];

    // dot operator to access variables
    people[0].name = "Kherbin";
    people[0].number= "+63-0933";

    people[1].name = "Josh";
    people[1].number= "+63-0922";
    
    people[2].name = "Wren";
    people[2].number= "+63-0933";

    people[3].name = "Renzo";
    people[3].number= "+63-0944";

    char name[100];
    fgets(name, 100, stdin);


    int length = 0;
    while (name[length] != '\0') {
        length++;
        if (name[length] == '\0') {
            name[length - 1] = '\0';
        }
    }

    for (int i = 0; i < 4; i++) {
        if (strcmp(people[i].name, name) == 0) {
            printf("Name: %s\n", people[i].name);
            printf("Number: %s\n", people[i].number);
            return 0;
        }
    }
    printf("Low tier %s, idk you", name);
}
