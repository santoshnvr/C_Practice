#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *link;	

};

struct node *head = NULL;

struct node *insertAtTheBegining(struct node *head, int value);
struct node *insertAtTheLast(struct node *head, int value);

int main() {
	
	printf("Select one option\n");

	printf("  	a-> Insert at the begining\n");
        printf("  	b-> Insert at the end\n");
        printf("  	c-> Delete first \n");
	printf("	d-> Delete last \n");
	char c = getchar();

	switch(c){
		case 'a': printf("Selected a\n");
		break;
		case 'b': printf("Selected b\n");
		break;
		case 'c': printf("Selected c\n");
		break;
		case 'd': printf("Selected d\n");
		break;
		default: printf("Please enter one of the above options\n");
		break;
	}
return 0;
}

/*
	1) If head is null crete new a node, set value and return.
	2) If head is not null create a new node, copy head link value into new node and new node address into head.
*/

struct node *insertAtTheBegining(struct node *head, int value){
	if 
	struct node *newNode = (struct node*) malloc(sizeof(struct node));
	newNode->data = value;
	newNode->link = head;
	head = newNode;
return head;
}
