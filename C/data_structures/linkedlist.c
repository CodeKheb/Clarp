#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int number;
    struct node *next;
} node;

int main(void) {
    node *firstnode = NULL;
    node *lastnode = NULL;

    int amount = 0;
    printf("Amount: ");
    scanf("%i", &amount);
    for (int i = 0; i < amount; i++) {
        node *n = malloc(sizeof(node));
        if (n == NULL) {
            return 1;
        }
        printf("Node at %i: ", i);
        scanf("%i", &n->number);
        n->next = NULL;

        if (lastnode != NULL) {
            lastnode->next = n;
            lastnode = n;
        } else {
            firstnode = n;
            lastnode = n;
        }
    }

    // Print
    for (node *ptr = firstnode; ptr != NULL; ptr = ptr->next){
        printf("%i\n", ptr->number);
    }
    
    
    return 0;
}
