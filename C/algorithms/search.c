#include <stdio.h>
#include <string.h>

int main(void) {
    // * pointers, for a string array, [0] points to the first character of the array which is "battleship"
    char *strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};

    // char s[100] dedicated character for user input
    char s[100];
    // fgets, just like scanf but more for strings
    // takes variable s, the size [100], and standard library input
    fgets(s, 100, stdin);
    // fgets is weird because it adds a new line automatically at the end 
    // because of this you can't really strcmp the input properly without removing it

    // remove the new line by making it a NUL terminator
    int s_length = 0;
    while (s[s_length] != '\0') {
        s_length++;
        if (s[s_length] == '\0') {
            (s[s_length - 1] = '\0');
        }
    }

    for (int i = 0; i < 6; i++) {
        // strcmp from string.h takes two strings as an argument then compares
        // if it equals to 0, it is the same, otherwise it is not
        if (strcmp(s, strings[i]) == 0) {
            printf("FOUND %s", s);
            return 0;
        }
    }

    printf("NOT FOUND");
    return 1;
}
