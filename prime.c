#include<stdio.h>
int main() {
	int count = 0, number;
	printf("Please enter a number: ");
	scanf("%d", &number);

	for(int i= 2; i < number; i++){
		if(number % i == 0) count++;
	}
	
	if(count == 0){
		printf("Number is prime\n");
	} else {
		printf("Number is not prime\n");
	} 
return 0;
}
