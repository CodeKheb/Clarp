#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node *next;
} node;

int main(void) {
    node *list = NULL;
    int amount_of_nodes = 0;

    printf("Enter amount of nodes: ");
    scanf("%i", &amount_of_nodes);

    for (int i = 0; i < amount_of_nodes; i++) {
        node *n = malloc(sizeof(node));

        printf("Enter at node %i: ", i);
        scanf("%i", &n->value);
        n->next = list;
        list = n;
    }

    for (node *ptr = list; ptr != NULL; ptr = ptr->next) {
        printf(" %i", ptr->value);
    }
}
