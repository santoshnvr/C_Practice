struct node
{
	int data;
	struct node *link;	
};

void insertAtTheBegining(struct node **tail, int value);
void printCLL(struct node *tail);