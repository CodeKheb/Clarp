#include <stdio.h>

void * bubble(int nums[], int length);
int * bubble_print(int nums[], int length);


int main(void) {
    int sort[8] = {2, 3, 5, 1, 0, 4, 7, 6};
    int size = sizeof(sort) / sizeof(int);


    printf("Array: ");
    for (int i = 0; i < 8; i++) {
        printf("%i ", sort[i]);
    }

    int *nums = bubble_print(sort, size);

    bubble(sort, size);

    printf("\nSorted?: ");
    for (int i = 0; i < 8; i++) {
        printf("%i ", sort[i]);
    }
}

void * bubble(int nums[], int length) {
    int temp;

    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length - i - 1; j++) {

            if (nums[j] > nums [j + 1]) {
                temp = nums[j + 1];
                nums[j + 1] = nums[j];
                nums[j] = temp;
            }
        }
    }
}

int * bubble_print(int nums[], int length) {
    int temp;

    for (int i = 0; i < length; i++){
        for (int j = 0; j < length - i - 1; j++) {

            if (nums[j] > nums[j + 1]) {
                 temp = nums[j + 1];
                 nums[j + 1] = nums[j];
                 nums[j] = temp;
            }
        }
    }
    return nums;
}

    
