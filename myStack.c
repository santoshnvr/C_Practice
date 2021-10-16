#include "stackOperations.h"
#include <stdio.h>

// void push(struct node **stack, int value);
// void pop(struct node **stack);
// void peep(struct node *stack);
int main() {
	struct node *stack = NULL;
	printf("Trying to push value\n");
 	push(&stack, 10);
 	push(&stack, 20);
 	push(&stack, 30);
	push(&stack, 40);
 	push(&stack, 50);
 	printf("pushed value\n");
 	peep(stack);
 	pop(&stack);
 	peep(stack);
 	push(&stack, 500);
 	peep(stack);

	return 0;
}