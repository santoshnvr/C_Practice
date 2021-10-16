#include <stdio.h>
#include <stdlib.h>

struct queue
{
	int item[40];
	int front;
	int rear;
};


struct queue* createQueue();
void enqueue(struct queue* q, int value);
void dequeue(struct queue* q);
void display(struct queue* q);
int isEmpty(struct queue* q);
void printQueue(struct queue* q);

struct node {
	int verted;
	struct node* next;
};

struct node* createNode(int);
