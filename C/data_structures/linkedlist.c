#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int number;
    struct node *next;
} node;

int main(void) {

    node *list = NULL;

    for (int i = 0; i < 3; i++) {
        node *n = malloc(sizeof(node));
        if (n == NULL) {
            return 1;
        }
        printf("Node at %i: ", i);
        scanf("%i", &n->number);
        n->next = NULL;

        // Prepend to list 
        n->next = list;
        list = n;
    }

    // Print
    for (node *ptr = list; ptr != NULL; ptr = ptr->next){
        printf("%i\n", ptr->number);
    }
    
    
    return 0;
}
