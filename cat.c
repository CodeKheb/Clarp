#include <stdio.h>
#include <stdlib.h>

int main(int arg, char **kwargs) {
    if (arg < 2){
        printf("Use ./cat FILE_PATH\n");
        return 1;
    }
    // fopen read binary
    FILE *source = fopen(kwargs[1], "rb");
    if (source == NULL) return 1;

    unsigned int byte;

    // seek from byte 0 to the end of file
    fseek(source, 0, SEEK_END);
    // end of file pointer store in size
    long size = ftell(source);
    // go back to byte 0
    rewind(source);

    // string malloc size + null terminator
    char *arr = malloc(size + 1);
    int ch;
    int i = 0;

    for (;;) {
        if (ch != EOF) {
            ch = fgetc(source);
            arr[i] = (char)ch;
            i++;
        } else {
            arr[i] = '\0';
            printf("%s", arr);
            fclose(source);
            return 0;
        }
    }
}
