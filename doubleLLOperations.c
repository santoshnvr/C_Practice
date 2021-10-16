#include "doubleLLOperations.h"
#include <stdio.h>
#include <stdlib.h>

void insertAtTheBegining(struct node **head, int value) {
	struct node *newNode = (struct node *)malloc(sizeof(struct node));
	newNode->data = value;
	newNode->previous = NULL;
	newNode->next = NULL;

	if(*head == NULL) {
		*head = newNode;
	} else {
		struct node *temp = *head;
		temp->previous = newNode;
		newNode->next = temp;
		*head = newNode;
	}
}

void printList(struct node *head) {
	while(head != NULL) {
		printf("%d ", head->data);
		head = head->next;
	}
	printf("\n");
}