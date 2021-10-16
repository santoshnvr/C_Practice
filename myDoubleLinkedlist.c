#include <stdio.h>
#include <stdlib.h>
#include "doubleLLOperations.h"

int main() {
	 struct node *head = NULL;	
	insertAtTheBegining(&head, 10);
	insertAtTheBegining(&head, 20);
	printList(head);
	return 0;

}