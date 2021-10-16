#include<stdio.h>
int main() {
	long number = 0;
	int count = 0;
	printf("Enter a number: ");
	scanf("%ld", &number);

	while(number != 0) {
		number /= 10;
		count++;
	}
	
	printf("Total number of numbers = %d\n", count);

return 0;
}
