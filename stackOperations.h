struct node
{
	int data;
	struct node *link;
};

void push(struct node **stack, int value);
void pop(struct node **stack);
void peep(struct node *stack);