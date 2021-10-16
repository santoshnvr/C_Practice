#include<stdio.h>
int main() {
	printf("Please enter a number: ");
	int number;
	
	do {
		scanf("%d", &number);
	}while(number > 0);

return 0;
}
