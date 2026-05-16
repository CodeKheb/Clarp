// Header
#include <stdio.h>
#include <stdlib.h>

// Prototypes
int addition(int first_input, int second_input);
int subtraction(int first_input, int second_input);
int multiplication(int first_input, int second_input);
int division(int first_input, int second_input);
char calculate(char operator, int first_input, int second_input);

// Main
int main(void){
    int first_input;
    int second_input;
    char operator;

    printf("First Integer: ");
    scanf("%i", &first_input);

    printf("Operator (+ - / *): ");
    // need space here before %c to skip whitespaces in new line 
    scanf(" %c", &operator);

    printf("Second Integer: ");
    scanf("%i", &second_input);

    int result = calculate(operator, first_input, second_input);
    printf("%i", result);
}

char calculate(char operator, int first_input, int second_input) {
    int result;
    switch (operator) {
        case '+': result = addition(first_input, second_input);
        case '-': result = subtraction(first_input, second_input);
        case '*': result = multiplication(first_input, second_input);
        case '/': result = division(first_input, second_input);
        default: printf("NO");
    }

    return result;
}

int addition(int first_input, int second_input) {
    int sum = first_input + second_input;
    return sum;
}

int subtraction(int first_input, int second_input) {
    int difference = first_input - second_input;
    return difference;
}

int multiplication(int first_input, int second_input) {
    int product = first_input * second_input;
    return product;
}

int division(int first_input, int second_input) {
    int quotient = first_input / second_input;
    return quotient;
}


