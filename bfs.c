
struct queue* createQueue() {
	struct queue *q = (struct queue*)malloc(sizeof(struct queue));
	q->front = -1;
	q->rear = -1;
	return queue;
}

int isEmpty(struct queue* q){
	if (q->rear = -1)
		return 1;
	else 
		return 0;
}

void enqueue(struct queue* q, int value) {
	if (q->front == -1) 
		q->front = 0;
	q->rear++;
	q->
}

void dequeue() {

}