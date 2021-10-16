#include <stdio.h>

void bubbleSort(int arr[], int size);
void swap(int *a, int *b);
void printArray(int arr[], int size);

int main(int argc, char const *argv[])
{
	int arr[] = {300, 200, 100, 75, 50, 25, 20};
	bubbleSort(arr, 7);
	printf("After sorting ");
	printArray(arr, 7);
	printf("\n");
	return 0;
}

void printArray(int arr[], int size) {
	for (int i = 0; i < size; ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubbleSort(int arr[], int size) {
	int swapped, i, j;
	for (int i = 0; i < size; ++i)
	{
		swapped = 0;
		for (int j = 0; j < size - i - 1; ++j)
		{
			if (arr[j] > arr[j+1])
			{
				swap(&arr[j], &arr[j+1]);
				swapped = 1;
				printf("Swapped ");
				printArray(arr, 7);
			}
		}
		if (swapped == 0)
			break;
	}
}