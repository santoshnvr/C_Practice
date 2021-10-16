#include "cllOperations.h"
#include <stdio.h>
#include <stdlib.h>

void insertAtTheBegining(struct node **tail, int value) {
	struct node *newNode = (struct node*)malloc(sizeof(struct node));
	newNode->data = value;

	if (*tail == NULL)	
	{
		newNode->link = newNode;
		*tail = newNode;
	} else {
		newNode->link = (*tail)->link;
		(*tail)->link = newNode;
	}
}


void printCLL(struct node *tail) {
	printf("list is: ");
	if (tail->link == tail)
	{	
		printf("%d ", tail->data);
	} else {
		struct node *tempNode = tail->link;
		 do {
			printf("%d ", tempNode->data);
			tempNode = tempNode->link;
		} while(tempNode != tail->link);
	}
	printf("\n");
}