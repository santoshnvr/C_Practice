#include<stdio.h>

int greatest(int a, int b){
 int max = a > b ? a : b;
 return max;	
}

int main(){
	printf("Enter two numbers: ");
	int a, b;
	scanf("%d, %d", &a, &b);
	int max = greatest(a, b);
	printf("%d is greatest \n", max);
return 0;
}
