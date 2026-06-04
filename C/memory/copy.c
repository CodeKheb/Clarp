#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

typedef char * String;

int main(void) {
    String s = "hi!";
    if (s == NULL) {
        return 1;
    }

    String t = malloc(strlen(s) + 1);
    if (t == NULL) {
        return 1;
    }

    // copy s to t
    strcpy(t, s);

    t[0] = toupper(t[0]);

    printf("s: %s\n", s);
    printf("s: %s\n", t);
    free(t);
}
