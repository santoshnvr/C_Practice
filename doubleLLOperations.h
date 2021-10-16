
struct node 
{
	int data;
	struct node *previous;
	struct node *next;
};

void insertAtTheBegining(struct node **head, int value);
void printList(struct node *head);