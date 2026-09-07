#include <stdio.h>

int main(void) {
    // "wb" write binary to a ppm (portable pixmap) FILE
    FILE *output = fopen("output.ppm", "wb");
    if (output == NULL) {
        return 1;
    }

    // width and height
    int width = 32*60;
    int height = 32*60;

    // fprintf P6 (ppm format binary RGB)
    fprintf(output, "P6\n");
    // dimensions (width and height)
    fprintf(output, "%d %d\n", width, height);
    // maximum value of RGB (255)
    fprintf(output, "255\n");

    // rows and columns loop 
    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {

            // red
            fputc(0x00, output);
            // green
            fputc(0xFF, output);
            // blue
            fputc(0xFF, output);
        }
    }
    // close the file
    fclose(output);
}
