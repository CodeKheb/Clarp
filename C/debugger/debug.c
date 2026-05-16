#include <stdio.h>

/* Command Line Arguments for gcc
 * gcc -g debug.c -o debug
 * -l<Header> // Linking
 *
 *  Compiling 
 *  - preprocessing
 *      header includes contents of header file
 *  - compiling
 *      taking preprocessed code and takes to assembly
 *  - assembling
 *      converting assembly to binary
 *  - linking
 *      link the headers and everything
 */
void print_column(int height);

int main(void) 
{
    int h;

    scanf("%i", &h);
    print_column(h);
}

void print_column(int height)
{
    for (int i = 0; i < height; i++)
    {
        printf("H\n");
    }
}
