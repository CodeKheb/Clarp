#include <stdio.h>

int * bubble(int nums[]);

int main(void) {
    int sort[8] = {7, 3, 5, 1, 0, 4, 2, 6};


    printf("Array: ");
    for (int i = 0; i < 8; i++) {
        printf("%i ", sort[i]);
    }

    bubble(sort);

    printf("\nSorted?: ");
    for (int i = 0; i < 8; i++) {
        printf("%i ", sort[i]);
    }
}

int * bubble(int nums[]) {
    int temp;

    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8 - i - 1; j++) {

            if (nums[j] > nums[j + 1]) {
                 temp = nums[j + 1];
                 nums[j + 1] = nums[j];
                 nums[j] = temp;
            }
        }
    }
    return nums;
}
