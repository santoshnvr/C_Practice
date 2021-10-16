#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void printArray(int arr[]) {
	for (int i = 0; i < 10; ++i)
	{
		printf(" %d ", arr[i]);
	}
	printf("\n");
}

int partition(int arr[], int low, int high) {
	 int pivote = arr[high];
	 int i = (low -1);

	 for (int j = low; j <= high - 1; ++j)
	 {
	 	// printf("i and j values are %d  %d \n", i, j);
	 	if (arr[j] < pivote)
	 	{
	 		i++;
	 		swap(&arr[i], &arr[j]);
	 	}
	 }
	 swap(&arr[i+1], &arr[high]);
	 return (i+1);
}

void quickSort(int arr[], int low, int high) {
	if (low < high)
	{
	 int pivote = partition(arr, low, high);
	 quickSort(arr,low, pivote-1);
	 quickSort(arr,pivote+1, high);
	}
}