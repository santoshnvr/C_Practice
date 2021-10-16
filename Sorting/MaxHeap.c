#include <stdio.h>

int size = 0;


void printArray(int array[], int size) {
	for (int i = 0; i < size; ++i)
		printf(" %d", array[i]);
	printf("\n");
}

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void heapify(int array[], int size, int i) {
	if (size == 0)
	{
		printf("Single element in the heap\n");
	} else {
		int largest = i;
		int l = 2*i + 1;
		int r = 2*i + 2;
		if (l < size && array[l] < array[largest])
			largest = l;
		if (r < size && array[r] < array[largest])
			largest = r;
		if (largest != i)
		{
			swap(&array[i], &array[largest]);
			printf("Array after swapping\n");
			printArray(array, size);
			heapify(array, size, largest);
		}
	}
}

void insert(int array[], int newNum) {
	if (size == 0)
	{
		array[0] = newNum;
		size += 1;
	} else {
		array[size] = newNum;
		size += 1;
		printf("i value is %d\n", size/2 -1);
		for (int i = size/2 - 1; i >= 0; i--)
		{
			heapify(array, size, i);
		}
	}
}

int main(int argc, char const *argv[])
{
	int array[10];
	insert(array, 7);
	insert(array, 4);
	insert(array, 9);
	insert(array, 1);
	insert(array, 3);
	insert(array, 5);
	insert(array, 2);

	printf("Max-heap array: ");
	printArray(array, size);
	return 0;
}


