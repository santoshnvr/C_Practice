#include<stdio.h>
int main() {
	int number1, number2, number3;
	printf("Please enter theree numbers: ");
	scanf("%d, %d, %d", &number1,&number2, &number3);
	printf("First number is %d\n Second number is %d\n third number is %d\n", number1, number2, number3);	
	if((number1 > number2) & (number1 > number3)) {
		printf("First number is greatest\n");
	} else if (number2 > number3){
		printf("Second number is greatest\n");
	} else{
		printf("Third number is greatest\n");
	}
return 0;
}
