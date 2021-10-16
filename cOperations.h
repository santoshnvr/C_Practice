
struct node {
        int data;
        struct node *link;
};

void insertAtTheBegining(struct node **head, int value);
void insertAtTheLast(struct node *head, int value);
void insertAtThePosition(struct node **head, int data, int position);
int  removeFirst(struct node **head);
void removeAtPosition(struct node **head, int position);
void reverse(struct node **head);
void recursiveReverse(struct node *previous,struct node *current, struct node **head);
void printOptions();
void recurssionPrint(struct node *head);
void recurssionReversePrint(struct node *head);
void printList(struct node *head);