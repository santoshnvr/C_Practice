#include <stdio.h>
#include "myQueueOperations.h"

int main(int argc, char const *argv[])
{
	
	struct node *tail = NULL;
	printQueue(tail);
	dequeue(&tail);
	enqueue(&tail, 10);
	enqueue(&tail, 20);
	enqueue(&tail, 30);
	enqueue(&tail, 40);
	printQueue(tail);
	dequeue(&tail);
	printQueue(tail);
	dequeue(&tail);
	printQueue(tail);
	dequeue(&tail);
	printQueue(tail);
	dequeue(&tail);
	printQueue(tail);
	dequeue(&tail);
	printQueue(tail);

	return 0;
}