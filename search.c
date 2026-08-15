#include <stdio.h>
#include <stdlib.h>

int main(int args, char **argv) {
    char *search = argv[1];
    char command[100];
    snprintf(command, sizeof(command), "firefox https://google.com/search?q=%s", search);
    system(command);
}

