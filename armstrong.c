#include<stdio.h>
int main() {
	int number, total = 0;
	printf("Please enter the number: ");
	scanf("%d", &number);

	while(number != 0) {
		int lastNumber = number % 10;
		printf("Last number %d\n", lastNumber);
		int cubeOfNumber =  lastNumber * lastNumber * lastNumber;
		printf("cube of the last number: %d\n", cubeOfNumber);
		total += cubeOfNumber;
		printf("Total is %d\n",total);
		number /= 10;	
		printf("Remaining number %d\n", number);
	}
	
	printf("Result is %d \n", total);
return 0;
}
