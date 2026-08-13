#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node *next;
} node;

int main(void) {
    node *list = NULL;

    int amount = 0;
    printf("Amount: ");
    scanf("%i", &amount);

    for (int i = 0; i < amount; i++){
        node *n = malloc(sizeof(node));
        if (n == NULL) {
            return 1;
        }
        printf("Node at %i: ", i);
        scanf("%i", &n->value);
        n->next = NULL;

        // if list empty (first)
        if (list == NULL) {
            list = n;
        } 

        // if list has numbers
        else {
            for (node *ptr = list; ptr != NULL; ptr = ptr->next) {
                // if at the end of the list
                if (ptr->next == NULL) {
                    ptr->next = n;
                    break;
                }
            }
        }
    }

    for (node *ptr = list; ptr != NULL; ptr = ptr->next) {
        printf("%i\n", ptr->value);
    }
}
