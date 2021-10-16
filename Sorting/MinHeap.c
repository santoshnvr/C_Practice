#include <stdio.h>

int size = 0;

void swap(int *a, int *b) {
	int temp = *b;
	*b = *a;
	*a = temp;
}

void heapify(int array[], int size, int i) {
	int smallest = i;
	int l = 2*i + 1;
	int r = 2*i + 2;

	if (l < size && array[l] > array[smallest])
		smallest = l;
	if (r < size && array[r] > array[smallest])
		smallest = r;

	if (smallest != i)
	{
		swap(&array[i], &array[smallest]);
		heapify(array, size, smallest);
	}
}

void delete(int array[], int value) {
	int i;
	for (i = 0; i < size; ++i)
	{
		if (value == array[i])
			break;
	}
	swap(&array[i], &array[size - 1]);
	size -= 1;
	for (i = size/2 -1; i >= 0 ; i--)
	{
		heapify(array, size, i);
	}
}

void insert(int array[], int value) {
	if (size == 0)
	{
		array[size] = value;
		size += 1;
	} else {
		array[size] = value;
		size += 1;
	}
	for (int i = size/2 - 1; i >= 0 ; i--)
		{
			heapify(array, size, i);
		}	
}

void printArray(int array[]) {
	for (int i = 0; i < size; ++i)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
}

int main(int argc, char const *argv[])
{
	int array[10];
	insert(array, 3);
	insert(array, 9);
	insert(array, 5);
	insert(array, 4);
	insert(array, 1);
	insert(array, 7);

	printf("Array values is: ");
	printArray(array);
	
	delete(array, 9);
	printf("Array after deleting ");
	printArray(array);

	return 0;
}