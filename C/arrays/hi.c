#include <stdio.h>

int main(void) {
    // string is just a character array
    char string[3] = "HI!";

    // %i to a char prints the ascii value
    printf("%i %i %i\n", string[0], string[1], string[2]);

    int length = 0;
    while (string[length] != '\0'){
        length++;
    }
    // prints length of string
    printf("%i\n", length);

    // "HI!" takes up 4 bytes => H, I, !, \0
    // \0 is NUL in binary which tells the compiler to stop the string NUL terminated 

    for (int i = 0; i < length; i++) {
        printf("%c", string[i]);
    }
}
