#include <stdio.h>
#include <stdlib.h>
#include "quickSort.h"

void ggquickSort(int arr[], int low, int high);

int main(int argc, char const *argv[])
{
	int arr[] = { 10, 14, 28, 11, 7, 16, 30, 50, 25, 18};
	printf("Unsorted array is: ");
	printArray(arr);
	quickSort(arr, 0,10);
	printf("Sorted array is: ");
	printArray(arr);
	return 0;
}


void ggswap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
  
/* This function takes last element as pivot, places 
   the pivot element at its correct position in sorted 
    array, and places all smaller (smaller than pivot) 
   to left of pivot and all greater elements to right 
   of pivot */
int ggpartition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];    // pivot 
    int i = (low - 1);  // Index of smaller element 
  
    for (int j = low; j <= high- 1; j++) 
    { 
        // If current element is smaller than the pivot 
        if (arr[j] < pivot) 
        { 
            i++;    // increment index of smaller element 
            ggswap(&arr[i], &arr[j]); 
        } 
    } 
    ggswap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 
  
/* The main function that implements QuickSort 
 arr[] --> Array to be sorted, 
  low  --> Starting index, 
  high  --> Ending index */
void ggquickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        /* pi is partitioning index, arr[p] is now 
           at right place */
        int pi = ggpartition(arr, low, high); 
  
        // Separately sort elements before 
        // partition and after partition 
        ggquickSort(arr, low, pi - 1); 
        ggquickSort(arr, pi + 1, high); 
    } 
} 