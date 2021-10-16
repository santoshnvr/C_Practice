	#include "cOperations.h"
	#include<stdio.h>
	#include<stdlib.h>

	void printOptions() {
		printf("Select one option\n");
	        printf("        1-> Insert at the begining\n");
	        printf("        2-> Insert at the end\n");
	        printf("        3-> Delete first \n");
	        printf("        4-> Delete last \n");
	        printf("        5-> Display list\n");
			printf("		6-> Insert at position\n");
			printf(" 		7-> Exit\n");
	}

void recurssionPrint(struct node *head) {
	printf("%d",head->data);
	if (head->link != NULL)
	{
		printf(",");
		recurssionPrint(head->link);
	} else {
		printf("\n");
	}
}

void recurssionReversePrint(struct node *head){
	if (head != NULL)
	{
		recurssionReversePrint(head->link);
		printf("%d", head->data);
	} else {
		printf("\n");
	}
}

void recursiveReverse(struct node *previous,struct node *current, struct node **head) {
	if (current != NULL)
	{	
		recursiveReverse(current, current->link, head);
		current->link = previous;
	} else {
		*head = previous;
	}
}

	void reverse(struct node **head){
		struct node *previous, *current, *next;
		current = *head;
		previous = NULL;
		while(current != NULL) {
			next = current->link;
			current->link = previous;
			previous = current;
			current = next;
		}
		*head = previous;
	}

	void removeAtPosition(struct node **head, int position) {
		struct node *temp1 = *head;
		for (int i = 0; i < position-2; ++i)
			temp1 = temp1->link;

		struct node *temp2 = temp1->link;
		temp1->link = temp2->link;
		free(temp2);
	}

	void insertAtThePosition(struct node **head, int data, int position) {
			struct node *newNode = (struct node *)malloc(sizeof(struct node));
			newNode->data = data;
			newNode->link = NULL;

			if (position == 1)
			{
				insertAtTheBegining(head, data);
				return;
			}
			
			struct node *tempNode = *head;
			for (int i = 0; i < position - 2; ++i)
			{
				tempNode = tempNode->link;
			}
			newNode->link = tempNode->link;
			tempNode->link = newNode;
	}


	int removeFirst(struct node **head) {
		if(*head == NULL) return -1;
		if((*head)->link == NULL) {
		free(*head);
		return 0;			
		} else {		
		struct node *nextLink = (*head)->link;
		free(*head);
		*head = nextLink;
		}
	return 0;
	}

	void insertAtTheLast(struct node *head, int value){
		struct node *current = head;
		struct node *newLink = (struct node*)malloc(sizeof(struct node));
		newLink->data = value;
		while (current->link != NULL) {
			current = current->link;
	}
		newLink->link = NULL;
		current->link = newLink;
	}

	void printList(struct node *head) {
		printf("List is: ");
		while (head != NULL) {
			printf("%d ", head->data);
			head = head->link;
		}
		printf("\n");
	}

	/*
	        1) If head is null crete new a node, set value and return.
	        2) If head is not null create a new node, copy head link value into new node and new node address into head.
	*/

	void insertAtTheBegining(struct node **head, int value){
	        struct node *newNode;
			newNode = (struct node*) malloc(sizeof(struct node));
	        newNode->data = value;
	        newNode->link = *head;
	        *head = newNode;
	}
