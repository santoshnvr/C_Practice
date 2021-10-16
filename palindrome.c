#include<stdio.h>
int main(){
	int number, inverse = 0;
	printf("Enter a number: ");
	scanf("%d",&number);
	int initialNumber = number;	
	while(number != 0){
		int reminder = number%10;
		inverse *= 10;
		inverse += reminder;
		number /= 10;
	}
	
	printf("Inverse is: %d\n", inverse);
	
	if(initialNumber == inverse) {
		printf("number is a palindrome\n");
	}else {
		printf("Number is not a palindrome\n");
	}
return 0;
}
