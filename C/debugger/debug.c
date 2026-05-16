#include <stdio.h>

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
