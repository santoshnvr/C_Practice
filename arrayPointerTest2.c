#include<stdio.h>

int main() {
	int arr[] = {5, 10, 15, 20, 25};
	int *pointerArray[] = {arr, arr+1, arr+2, arr+3, arr+4};
	
	int **pointerToPointer = pointerArray;
	
	printf("First element %d\n", arr[0]);
	printf("First element %d\n", *pointerArray[0]);
	printf("First element %d\n", **(pointerToPointer + 1));
	pointerToPointer++;
	pointerToPointer++;
	printf("Current pointertoPointer is at %d\n", **pointerToPointer);
return 0;
}

