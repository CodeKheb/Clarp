#include <stdio.h>

int main(void) {
    int num[] = {1, 5, 15, 20, 50, 70, 100};
    int find_number = 50;
    int middle = 3;
    int location = 0;

    while (num[location] != find_number) {
        if (num[middle] == find_number) {
            printf("Found %i", find_number);
            location += middle;
            return 0;
        }
        else if (find_number < num[middle]){
            for (int i = 0; i < middle; i++) {
                location++;
                if (num[i] == find_number) {
                    printf("Found %i", find_number);
                    return 1;
                }
            }
        } else if (find_number > num[middle]) {
            for (int i = middle + 1; i < 7; i++) {
                location--;
                if (num[i] == find_number) {
                    printf("Found %i", find_number);
                    return 2;
                }
            }
        }
    }
}
