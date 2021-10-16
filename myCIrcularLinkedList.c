#include <stdio.h>
#include <stdlib.h>
#include "cllOperations.h"

int main(int argc, char const *argv[])
{
	struct node *tail;
	tail = NULL;

	insertAtTheBegining(&tail, 10);
	insertAtTheBegining(&tail, 20);
	insertAtTheBegining(&tail, 30);
	insertAtTheBegining(&tail, 40);
	printCLL(tail);
	return 0;
}