#include "mergeSort.h"

void merge(int arr[], int start, int middle, int end) {
	int i, j, k;
	int n1 = middle - start + 1;
	int n2 = end - middle;
	int l[n1], r[n2];

	for (i = 0; i < n1; ++i)
		l[i] = arr[start + i];
	for (j = 0; j < n2; ++j)
		r[i] = arr[middle + 1 + j];

	i = 0;
	j = 0;
	k = start;

		while(i < n1 && j < n2) {
			if (l[i] <= r[j])
			{
				arr[k] = l[i];
				i++;
			} else {
				arr[k] = r[j];
				j++;
			}
			k++;
		}
	while(i< n1) {
		arr[k] = l[i];
		i++;
		k++;
	}
	while(j < n2) {
		arr[k] = r[j];
		j++;
		k++;
	}
}

void mergeSort(int *arr[], int start, int end) {
	if (start < end) 
	{
		int middle = start + (end - start) / 2;
		mergeSort(arr, start, middle);
		mergeSort(arr, middle+1, end);
		merge(arr, start, middle,end);
		for (int i = 0; i < end; ++i)
		{
			printf(" %d", *arr[i]);
		}
		printf("\n");
	}
}

