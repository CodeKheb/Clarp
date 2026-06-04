#include <stdio.h>
#include <string.h>

typedef char * String;

int main(void) {
    String s = "Hi!";
    String c = "Hi!";

    if (strcmp(s, c) == 0) {
        printf("Same\n");
    } else {
        printf("Diff\n");
    }
}
