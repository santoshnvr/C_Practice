#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a[] = {20, 10, 5, 4, 3, 2, 1, 11, 12, 13, 14};
	int arr_size = sizeof(a)/ sizeof(a[0]);

	printf("%d\n", arr_size);
	for (int i = 0; i < arr_size; ++i)
	{
		for (int j = i; j < arr_size; ++j)
		{
			if (a[j] <= a[i])
			{
				int temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}

	for (int i = 0; i < arr_size; ++i)
	{
		printf("%d ", a[i]);
	}

	printf("\n");
	return 0;
}