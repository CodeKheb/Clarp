#include <stdio.h>
#include <string.h>

typedef struct {
    char *name;
    char *age;
} person;

char *remove_new_line(char arr[]);

int main(void) {
    int amount = 4;
    person people[amount];

    people[0].name = "Kherbin";
    people[0].age= "20";

    people[1].name = "Linus Torvalds";
    people[1].age= "56";
    
    people[2].name = "Linus Sebastian";
    people[2].age= "39";

    people[3].name = "Gaben";
    people[3].age= "63";

    char name[100];
    fgets(name, sizeof(name), stdin);

    remove_new_line(name);


    for (int i = 0; i < amount; i++) {
        if (strcmp(name, people[i].name) == 0) {
            printf("Name: %s\n", people[i].name);
            printf("Age: %s\n", people[i].age);
            return 0;
        }
    }

    printf("Who is %s", name);
    return 1;
}


char *remove_new_line(char arr[]) {
    int length = 0;
    while (arr[length] != '\0') {
        length++;
        if (arr[length] == '\n') {
            arr[length] = '\0';
        }
    }
    return arr;
}
