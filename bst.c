#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "bstOperations.h"


int main(int argc, char const *argv[])
{
	struct bst *root = NULL;
	root = insertData(root,20);
	root = insertData(root,10);
	root = insertData(root,30);
	root = insertData(root,25);
	root = insertData(root,35);
	// root = insertData(root,32);
	// root = insertData(root,40);
	// root = insertData(root, 30);
	// root = insertData(root, 10);
	// root = insertData(root, 40);
	// root = insertData(root, 20);
	

	// root = insertData(root, 30);
	// root = insertData(root, 10);
	// root = insertData(root, 20);
	// root = insertData(root, 40);
	printf("In order reverse: ");
	inorderReverse(root);
	printf("\n");

	printf("Height of tree is: %d\n",heightOfTree(root));

	printf("Number of full nodes: %d\n", numberofFullNodes(root));
	printf("Number of leaves: %d \n", numberOfLeaves(root));
	printf("Number of non leaf nodes %d \n", numberofNonLeaves(root));


	printf("Number of nodes is %d\n", numberOfNode(root));
	printf("Inorder is: ");
	inorder(root);
	printf("\n");

	printf("Preorder is: ");
	preorder(root);
	printf("\n");

	printf("Postorder is: ");
	postorder(root);
	printf("\n");

	printf("Double order is: ");
	doubleOrder(root);
	printf("\n");

	printf("Triple order is: ");
	tripleOrder(root);
	printf("\n");
	// root = insertData(root, 40);
	// bool found = search(root, 50);
	// if (found == true)
	// {
	// 	printf("Found the value\n");
	// } else {
	// 	printf("Not found\n");
	// }
	return 0;
}
