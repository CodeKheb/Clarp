#include <stdio.h>
#include <string.h>

int main(void) {
    char hello[5] = "Hello";

    int length = strlen(hello);

    // The difference between lowercase and uppercase
    int ascii_difference = 32;

    // loop to uppercase
    // lowercase char - 32 == uppercase 
    for (int i = 0; i < length; i++) {
        // If lowercase
        if (hello[i] >= 'a' && hello[i] <= 'z')
        {
            printf("%c", hello[i] - ascii_difference);
        }
        // If uppercase
        else {
            printf("%c", hello[i]);
        }
    }

}
