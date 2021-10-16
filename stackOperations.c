#include "stackOperations.h"
#include <stdio.h>
#include <stdlib.h>


struct node* createNewNodeWithValue(int value) {
	struct node *newNode = (struct node*)malloc(sizeof(struct node));
	newNode->data = value;
	return newNode;
}

void push(struct node **stack, int value) {
	struct node *newNode = createNewNodeWithValue(value);
	struct node *temp = *stack;
	newNode->link = temp;
	*stack = newNode;
}


void pop(struct node **stack) {
	struct node *temp = *stack;
	*stack = temp->link;
	free(temp);
}

void peep(struct node *stack){
	while(stack != NULL) {
		printf("%d ", stack->data);
		stack = stack->link;
	}
	printf("\n");
}