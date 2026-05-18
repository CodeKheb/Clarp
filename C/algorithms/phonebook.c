#include <stdio.h>
#include <string.h>

char * remove_new_line(char string[]);

int main(void) {
    char *names[] = {"Kherbin", "Josh", "Wren", "Renzo"};
    char *numbers[] = {"+63-0933", "+63-0922", "+63-0911", "+63-0944"};

    char name[100];

    printf("Name: ");
    fgets(name, 100, stdin);
    remove_new_line(name);

    for (int i = 0; i < 4; i++) {
        if (strcmp(name, names[i]) == 0) {
            printf("Hello %s\n", name);
            printf("Number: %s", numbers[i]);
            return 0;
        }
    }
    printf("I don't even know who you are");
    return 1;
}

// char pointer function points to array then returns array
char * remove_new_line(char string[])
{
    int length = 0;
    while (string[length] != '\0') {
        length++;
        if (string[length] == '\0') {
            string[length - 1] = '\0';
        }
    }
    return string;
}
