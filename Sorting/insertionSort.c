#include <stdio.h>

int main() {
	int a[] = {30, 20, 30, 20, 10};
	int arraySize = 5;

	printf("Unsorted values are ");
	for (int i = 0; i < arraySize; ++i)
	{
		printf(" %d ", a[i]);
	}

	for (int i = 0; i < arraySize; ++i)
	{
		for (int j = i+1; j < arraySize; ++j)
		{
			if (a[i] >= a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	printf("\n");
	printf("Sorted values are ");

	for (int i = 0; i < arraySize; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}