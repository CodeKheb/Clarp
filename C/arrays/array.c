#include <stdio.h>

float take_average(int length, int numbers[]); 

int main(void) {
    const int amount = 5;
    int scores[amount];

    for (int i = 0; i < amount; i++) {
        printf("Score %i: ", i + 1);
        scanf("%i", &scores[i]);
    }

    float average = take_average(amount, scores);
    printf("Average: %f", average);
}

float take_average(int length, int numbers[]) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += numbers[i];
    }

    return (float)sum / length;
}

