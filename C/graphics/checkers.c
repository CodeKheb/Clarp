#include <stdio.h>

int main(void) {

    FILE *checkers = fopen("checkers.ppm", "wb");
    int width = 32*60;
    int height = 32*60;

    
    fprintf(checkers, "P6\n");
    fprintf(checkers, "%d %d\n", width, height);
    fprintf(checkers, "255\n");

    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            if ((x / 60 + y / 60)%2) {
                fputc(0xFF, checkers);
                fputc(0xFF, checkers);
                fputc(0xFF, checkers);
            } else {
                fputc(0x00, checkers);
                fputc(0x00, checkers);
                fputc(0x00, checkers);
            }

        }
    }
    fclose(checkers);
}

