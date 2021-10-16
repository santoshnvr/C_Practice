#include<stdio.h>
#include<stdlib.h>
#include "cOperations.h"



struct node *head = NULL;

int main() {

int c;

insertAtTheBegining(&head,40);
insertAtTheBegining(&head,30);
insertAtTheBegining(&head,20);
insertAtTheBegining(&head,10);
recurssionReversePrint(head);
printf("\n");
recurssionPrint(head);
recursiveReverse(NULL, head, &head);
printf("Printing after recursive reverse function\n");
recurssionPrint(head);
//recurssionPrint(head);
//reverse(&head);
	// do{
	// printOptions();
 //        scanf("%d", &c);
 //        switch(c){
 //                case 1: {
 //        		printf("Enter a value");
 //        		int value = 0;
 //        		scanf("%d", &value);
 //        		printf("\n");
 //        		insertAtTheBegining(&head, value);
	// 	}
 //                break;
 //                case 2: insertAtTheLast(head, 500);
 //                break;
 //                case 3: removeFirst(&head);
 //                break;
 //                case 4: printf("Selected 4\n");
 //                break;
	// 	case 5: printList(head);
	// 	break;
 //                case 6: {
 //                        int data, position;
 //                        printf("Please enter data to be inserted: ");
 //                        scanf("%d", &data);
 //                        printf("\n Please enter the position: ");
 //                        scanf("%d", &position);
 //                        insertAtThePosition(&head,data,position);
 //                }
	// 	break;
 //                case 7: printf("Selected 7\n");
 //                default: printf("Please enter one of the above options\n");
 //                break;
 //        }
 // 	} while(c != 7);
return 0;
}	