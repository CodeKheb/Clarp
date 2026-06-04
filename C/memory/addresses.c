#include <stdio.h>

typedef char *String;

int main(void) {
    String s = "Hello World!";
    int n = 50;
    int *p = &n;
    // dereference
    printf("%i\n", *p);
    printf("%c\n", *s);
    printf("%c\n", *(s + 1));
    printf("%c\n", *(s + 2));
    printf("%c\n", *(s + 3));
    printf("%c\n", *(s + 4));
    printf("%c\n", *(s + 5));
    printf("%c\n", *(s + 6));
    printf("%c\n", *(s + 7));
    printf("%c\n", *(s + 8));
    printf("%c\n", *(s + 9));
    printf("%c\n", *(s + 10));
    printf("%c\n", *(s + 11));
    printf("%c\n", *(s + 12));

}
