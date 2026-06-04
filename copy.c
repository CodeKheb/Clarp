#include <stdio.h>

// unsigned = cannot be negative
typedef unsigned char BYTE;

int main(int argc, char *argv[]) 
{
    // "rb" read in binary "wb" write in binary
    // Takes first command line argument and reads it
    FILE *source = fopen(argv[1], "rb"); 
    if (source == NULL) {
        return 1;
    }

    // Takes second command line argument and writes to it
    FILE *destination = fopen(argv[2], "wb");
    if (destination == NULL) {
        return 1;
    }

    BYTE byte;

    // while reading from file into byte, sizeof byte, one at a time, into source check if read
    while (fread(&byte, sizeof(byte), 1, source) != 0) 
    {
        /* while can read byte of file
         * write into file
         */
        fwrite(&byte, sizeof(byte), 1, destination);
    }

    fclose(destination);
    fclose(source);
}
