#include <stdio.h>
#include <stdlib.h>
#include "myQueueOperations.h"


void enqueue(struct node **tail, int value) {
	struct node *newNode = (struct node*)malloc(sizeof(struct node));
	newNode->data = value;
	if (*tail == NULL) {
		*tail = newNode;
		newNode->link = newNode;
	} else {
		struct node *tailNode = *tail;
		newNode->link = tailNode->link;
		tailNode->link = newNode;
	}
}

void dequeue(struct node **tail) {
	if (*tail == NULL)
	{
		return;
	}
	struct node *tempNode = (*tail)->link;
	if (tempNode->link == tempNode) {
		*tail = NULL;
	} else {
		(*tail)->link = tempNode->link;
	}
	free(tempNode);
}

void printQueue(struct node *tail) {

	if (tail == NULL)
	{
		printf("List is empty\n");
	} else if (tail->link == tail) {
		printf("List is: ");
		printf("%d \n", tail->data);
	} else {
		struct node *tempNode = tail->link;
		printf("List is: ");
		do {
			printf("%d ", tempNode->data);
			tempNode = tempNode->link;
		} while(tempNode != tail->link);
	}
	printf("\n");
}