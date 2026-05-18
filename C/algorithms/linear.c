#include <stdio.h>

int main(void){
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};
    int find_number; 

    printf("Find what? ");
    scanf("%i", &find_number);

    int location = 1;

    for (int i = 0; i < 6; i++) {
        if (numbers[i] == find_number){
            printf("Found %i at location %i", find_number, location);
            return 0;
        } else {
            location++;
        }
    }

    printf("%i not found!!", find_number);
    return 1;
}
