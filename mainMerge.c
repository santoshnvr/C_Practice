#include <stdio.h>
#include "mergeSort.h"


int main(int argc, char const *argv[])
{
	int arr[] = {1, 2,5, 3, 7, 20, 10, 100, 500};
	mergeSort(arr, 0, 9);
	printf("\n");	
	return 0;
}

