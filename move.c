#include <stdio.h>

int main(int argc, char **argv) {
    char *src_pth = argv[1];
    FILE *source = fopen(src_pth, "rb");
    if (source == NULL) return 1;

    FILE *destination = fopen(argv[2], "wb");
    if (destination == NULL) return 1;

    unsigned char byte;

    while (fread(&byte, sizeof(byte), 1, source) != 0) {
        fwrite(&byte, sizeof(byte), 1, destination);
    }
    fclose(source);
    fclose(destination);

    remove(src_pth);
}
