#include<stdio.h>
void mergeSort(int a[], int starting, int ending);
void merge(int arr[], int l, int m, int r);
void printArray(int a[], int size);

int main(int argc, char const *argv[])
{
	int a[] = {40, 30, 20, 100, 25, 24, 23, 22, 21, 26, 10, 5, 4, 3, 2, 1, 11, 12, 13, 14};
	int arr_size = sizeof(a) / sizeof(a[0]); 
	// mergeSort(a, 0, 2);
	printf("Size is %d middle number is %d\n", arr_size, (arr_size/2));
	printf("Unsorted list is: ");
	printArray(a, arr_size);
	mergeSort(a, 0, arr_size - 1);
	printf("Sorted list is: ");
	printArray(a, arr_size);
	return 0;
}

void printArray(int a[], int size) {
	for (int i = 0; i < size; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void mergeSort(int arr[], int l, int r) 
{ 
	if (l < r) { 
		// Same as (l+r)/2, but avoids overflow for 
		// large l and h 
		int m = l + (r - l) / 2; 

		// Sort first and second halves 
		mergeSort(arr, l, m); 
		mergeSort(arr, m + 1, r); 

		merge(arr, l, m, r); 
	} 
} 

void merge(int arr[], int l, int m, int r) 
{ 
	int i, j, k; 
	int n1 = m - l + 1; 
	int n2 = r - m; 

	/* create temp arrays */
	int L[n1], R[n2]; 

	/* Copy data to temp arrays L[] and R[] */
	for (i = 0; i < n1; i++) 
		L[i] = arr[l + i]; 
	for (j = 0; j < n2; j++) 
		R[j] = arr[m + 1 + j]; 

	/* Merge the temp arrays back into arr[l..r]*/
	i = 0; // Initial index of first subarray 
	j = 0; // Initial index of second subarray 
	k = l; // Initial index of merged subarray 
	while (i < n1 && j < n2) { 
		if (L[i] <= R[j]) { 
			arr[k] = L[i]; 
			i++; 
		} 
		else { 
			arr[k] = R[j]; 
			j++; 
		} 
		k++; 
	} 

	/* Copy the remaining elements of L[], if there 
	are any */
	while (i < n1) { 
		arr[k] = L[i]; 
		i++; 
		k++; 
	} 

	/* Copy the remaining elements of R[], if there 
	are any */
	while (j < n2) { 
		arr[k] = R[j]; 
		j++; 
		k++; 
	} 
}