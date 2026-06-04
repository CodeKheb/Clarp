#include <stdio.h>

int * insertion (int nums[]);

int main (void) {
    int sort[8] = {2, 3, 5, 1, 0, 4, 7, 6};

    printf("Unsorted: ");
    for (int i = 0; i < 8; i ++) printf("%i ", sort[i]);

    insertion(sort);

    printf("\nSorted:   ");
    for (int i = 0; i < 8; i ++) printf("%i ", sort[i]);

}


int * insertion (int nums[]) {
    int temp;
    int swap;

    for (int i = 0; i < 8; i++) {
        temp = nums[i]; // 2

        // find
        for (int j = 0; j < 8 - i - 1; j++) {

        // sort[8] = {2, 3, 5, 1, 0, 4, 7, 6};
    
            if (nums[i] > nums[j + 1]) {
                // 2 > 1[j + 1] = 3
                swap = nums[j + 1]; // 1
                nums[i] = swap; // i[0] = 1
                temp = nums[j + 1];
                break;
            }
        }

    }

    return nums;
}
