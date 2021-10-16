#include "bstOperations.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


struct bst* insertData(struct bst *node, int data) {

	if (node == NULL)
	{
		struct bst *newNode = (struct bst*)malloc(sizeof(struct bst));
		newNode->data = data;
		newNode->leftNode = NULL;
		newNode->rightNode = NULL;
		node = newNode;
	} else if(data <= node->data) {
		node->leftNode = insertData(node->leftNode, data);
	} else {
		node->rightNode = insertData(node->rightNode, data);
	}
	return node;
}

bool search(struct bst *node, int data) {
		if (node == NULL) return false;
		else if (node->data == data) return true;
		else if (node->data >= data) return search(node->leftNode, data);
		else return search(node->rightNode, data);
}

void deleteNode(struct bst **node, int data) {
	struct bst *searchNode = *node;
	if (searchNode->data == data) 
	{
		
	}
	if (searchNode->data <= data)
	{
		
	}
}

void inorderReverse(struct bst *node) {
	if (node != NULL)
	{
		inorderReverse(node->rightNode);
		printf("%d ",node->data);
		inorderReverse(node->leftNode);
	}
}

void inorder(struct bst *node) {
	if (node != NULL)
	{
		inorder(node->leftNode);
		printf("%d ", node->data);
		inorder(node->rightNode);

	}
}

void preorder(struct bst *node) {
	if (node != NULL)
	{
		printf("%d ", node->data);
		preorder(node->leftNode);
		postorder(node->rightNode);
	}
}

void postorder(struct bst *node) {
	if (node != NULL)
	{
		postorder(node->leftNode);
		postorder(node->rightNode);
		printf("%d ", node->data);
	}
}

void doubleOrder(struct bst *node) {
	if (node != NULL)
	{
		doubleOrder(node->leftNode);
		printf("%d ", node->data);
		doubleOrder(node->rightNode);
		printf("%d ", node->data);
	}
}

void tripleOrder(struct bst *node) {
	if (node != NULL)
	{
		printf("%d ", node->data);
		tripleOrder(node->leftNode);
		printf("%d ", node->data);
		tripleOrder(node->rightNode);
		printf("%d ", node->data);
	}
}

int numberOfNode(struct bst *node) {
	if (node != NULL)
	{
		int l = numberOfNode(node->leftNode);
		int r = numberOfNode(node->rightNode);
		return 1 + l + r; 
	} else {
		return 0;
	}
}

int numberOfLeaves(struct bst *node) {
	if (node == NULL) return 0;
	if (node->leftNode == NULL && node->rightNode == NULL)
	{
		return 1;
	} else {
		return numberOfLeaves(node->leftNode) + numberOfLeaves(node->rightNode);
	}
}

int numberofNonLeaves(struct bst *node) {
	if (node == NULL) return 0;
	if (node->leftNode == NULL && node->rightNode == NULL)
	{
		return 0;
	} else 
	{
		return 1 + numberofNonLeaves(node->leftNode) + numberofNonLeaves(node->rightNode); 
	}
}

int numberofFullNodes(struct bst *node) {
	if (node == NULL) return 0;
	if (node->leftNode == NULL || node->rightNode == NULL)
	{
		return 0;
	} else {
		return numberofFullNodes(node->leftNode) + numberofFullNodes(node->rightNode) + ((node->leftNode != NULL && node->rightNode != NULL) ? 1 : 0);
	}
}

int heightOfTree(struct bst *node) {
	if (node == NULL) return 0;
	if (node->leftNode == NULL && node->rightNode == NULL)
	{
		return 0;
	} else {
		int l = heightOfTree(node->leftNode);
		int r = heightOfTree(node->rightNode);
		int max =  l>r?l:r;
		return 1 + max;
	}
}
