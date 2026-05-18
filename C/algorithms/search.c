#include <stdio.h>

int main(void) {
    // * pointers, for a string array, [0] points to the first character of the array which is "battleship"
    char *strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};

    // char s[100] dedicated character for user input
    char s[100];
    // fgets, just like scanf but more for strings
    // takes variable s, the size [100], and standard library input
    fgets(s, 100, stdin);

    for (int i = 0; i < 6; i++) {
        // if input s[i] == pointer to string[i]
        if (s[i] == *strings[i]) {
            printf("FOUND");
            return 0;
        }
    }

    printf("NOT FOUND");
    return 1;
}
