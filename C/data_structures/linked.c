#include <stdio.h> 
#include <stdlib.h> 

typedef struct node {
    int value;
    struct node *next;
} node;

int main(void) {
    node *list = NULL;
    int numnodes = 0;

    printf("How many nodes: ");
    scanf("%i", &numnodes);

    for (int i = 0; i < numnodes; i++) {
        node *n = malloc(sizeof(node));
        printf("Value at %i: ", i);
        scanf("%i", &n->value);
        n->next = NULL;

        n->next = list;
        list = n;
    }

    for (node *ptr = list; ptr != NULL; ptr = ptr->next) {
        printf(" %i", ptr->value);
    }

    return 0;
}
