#include<stdio.h>
void swap(int *a, int *b){
	*a += *b;
	*b = *a - *b;
	*a -= *b;
}

int main() {
	int a = 0, b = 0;
	printf("Enter two numbers: ");
	scanf("%d, %d", &a, &b);
	swap(&a,&b);
	printf("Swap numbers are %d, %d\n", a, b);
return 0;	
}
