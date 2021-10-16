struct node 
{
	int data;
	struct node *link;
};

void enqueue(struct node **tail, int value);
void dequeue(struct node **tail);
void printQueue(struct node *tail);