#include <stdbool.h>

struct bst
{
	int data;
	struct bst *leftNode;
	struct bst *rightNode;
};

struct bst* insertData(struct bst *node, int data);
bool search(struct bst *node, int data);
void inorder(struct bst *node);
void preorder(struct bst *node);
void postorder(struct bst *node);
void doubleOrder(struct bst *node);
void tripleOrder(struct bst *node);
int numberOfNode(struct bst *node);
int numberOfLeaves(struct bst *node);
int numberofNonLeaves(struct bst *node);
int numberofFullNodes(struct bst *node);
void inorderReverse(struct bst *node);
int heightOfTree(struct bst *node);
void deleteNode(struct bst **node, int data);
