//
//  linkedlist.c
//  LinkedList
//
//  Created by GGKU5MACBOOK004 on 10/08/20.
//  Copyright © 2020 GGKU5MACBOOK004. All rights reserved.
//

#include "linkedlist.h"

#include<stdio.h>
#include<stdlib.h>

struct node {
  int data;
  struct node *link;
};

struct node *head = NULL;

struct node *insertAtTheBegining(struct node *head, int value);
struct node *insertAtTheLast(struct node *head, int value);
void printOptions();

void main() {
  char c;
  
  do{
    printOptions();
    c = getchar();
    c -= 48;
    switch(c){
      case 1: printf("Selected 1\n");
	break;
      case 2: printf("Selected 2\n");
	break;
      case 3: printf("Selected 3\n");
	break;
      case 4: printf("Selected 4\n");
	break;
      case 5: printf("Selected 5\n");
	break;
      default: printf("Please enter one of the above options\n");
	break;
    }
  } while(c != 5);
//  return 0;
}

void printOptions() {
  printf("Select one option\n");
  printf("        1-> Insert at the begining\n");
  printf("        2-> Insert at the end\n");
  printf("        3-> Delete first \n");
  printf("        4-> Delete last \n");
  printf("        5-> Exit");
}
