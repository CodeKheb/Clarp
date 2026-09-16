#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_MAX_SIZE 100

typedef struct Stack {
  int data[STACK_MAX_SIZE];
  int top;
} Stack;

Stack *create(void);
void destroy(Stack *s);
bool push(Stack *s, int value);
bool pop(Stack *s, int *value);
bool peek(Stack *s, int *value);
bool isEmpty(Stack *s);
bool isFull(Stack *s);

int main(void) {
  Stack *s = create();
  if (s == NULL)
    return 1;

  int arr[] = {1, 2, 3, 4, 5};
  for (int i = 0; i < 5; i++) {
      push(s, arr[i]);
      printf("Pushed %d!\n", arr[i]);
  }
  for (int i = 0; i < 5; i++) {
      pop(s, &arr[i]);
      printf("Popped %d!\n", arr[i]);
  }

  printf("Stack: ");
  for (int i = 0; i < 5; i++) {
      printf("%d ", arr[i]);
  }
  destroy(s);
  printf("\nStack destroyed!");
  return 0;

}

Stack *create(void) {
  Stack *s = malloc(sizeof(Stack));
  if (s == NULL) {
  }
  s->top = -1;
  return s;
}

void destroy(Stack *s) {
  if (s != NULL) {
    free(s);
  }
}

bool push(Stack *s, int value) {
  if (isFull(s)) {
    return false;
  }
  s->top++;
  s->data[s->top] = value;
  return true;
}

bool pop(Stack *s, int *value) {
  if (isEmpty(s)) {
    return false;
  }
  *value = s->data[s->top];
  s->top--;
  return true;
}

bool peek(Stack *s, int *value) {
  if (isEmpty(s)) {
    return false;
  }
  *value = s->data[s->top];
  return true;
}

bool isEmpty(Stack *s) { return s->top == -1; }

bool isFull(Stack *s) { return s->top == STACK_MAX_SIZE - 1; }
