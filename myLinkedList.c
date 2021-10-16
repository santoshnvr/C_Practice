#include<stdio.h>
#include<stdlib.h>

struct node {
        int data;
        struct node *link;
};

struct node *head = NULL;

void insertAtTheBegining(struct node **head, int value);
void insertAtTheLast(struct node *head, int value);
void insertAtThePosition(struct node *head, int position);
int removeFirst(struct node **head);
void printOptions();
void printList(struct node *head);

int main() {

int c;
	do{
		printOptions();
        scanf("%d", &c);
        switch(c){
                case 1: {
		 printf("Enter a value");
		int value = 0;
		scanf("%d", &value);
		printf("\n");
		 insertAtTheBegining(&head, value);
		}
                break;
                case 2: insertAtTheLast(head, 500);
                break;
                case 3: removeFirst(&head);
                break;
                case 4: printf("Selected 4\n");
                break;
				case 5: printList(head);
				break;
				case 6: printf("Selected 6\n");;
				break;
                default: printf("Please enter one of the above options\n");
                break;
        }
 	} while(c != 6);
return 0;
}	

/*
	1) Position is available or not.
	2) If position is available 
*/

void insertAtThePosition(struct node *head, int position) {
	int currentPosition = 0;
		if (currentPosition == position) {


		}
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
	struct node *current = head;
	while (current != NULL) {
		printf("%d\n", current->data);
		current = current->link;
	}
}

void printOptions() {
	printf("Select one option\n");
        printf("        1-> Insert at the begining\n");
        printf("        2-> Insert at the end\n");
        printf("        3-> Delete first \n");
        printf("        4-> Delete last \n");
        printf("        5-> Display list\n");
	printf("	6-> Exit\n");
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
