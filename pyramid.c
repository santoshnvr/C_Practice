#include<stdio.h>
int main() {
	int rowNumber = 0;
	printf("Row number: ");
	scanf("%d", &rowNumber);

	for(int i = 1; i < rowNumber; i++) {
		for(int j = i; j < rowNumber; j++) {
		printf(" ");
		}
		
		for(int k = 1; k < 2*i; k++){
		// printf("%d",k);
			printf("*");
		}
		printf("\n");
	}
return 0;
}
