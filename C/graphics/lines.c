#include <stdio.h>

int main(void) {
    FILE *lines = fopen("lines.ppm", "wb");
    int width = 32*60;
    int height = 32*60;

    fprintf(lines, "P6\n");
    fprintf(lines, "%d %d\n", width, height);
    fprintf(lines, "255\n");

    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            if ((x / 60) %2) {
                fputc(0xFF, lines);
                fputc(0xFF, lines);
                fputc(0xFF, lines);
            } else {
                fputc(0x00, lines);
                fputc(0x00, lines);
                fputc(0x00, lines);
            }
        }
    }


    return 0;
}
