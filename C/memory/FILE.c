#include <stdio.h>
#include <string.h>

int main(void) {
    // FILE struct points to variable, "*.csv" file "w" write, "a" append
    FILE *numbers = fopen("numbers.csv", "a");

    int number;
    printf("Number: ");
    scanf("%i", &number);


    fprintf(numbers, "%i\n", number);
    fclose(numbers);
}
