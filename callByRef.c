#include<stdio.h>
void swap(int *, int *);

int main() {
	int a = -20, b = 10;
	printf("Before a-> %d, b->%d\n", a,b);
	swap(&a, &b);
	printf("After a-> %d, b->%d\n", a,b);	
return 0;
}

void swap(int *a, int *b) {
	*a += *b;
	*b = *a - *b;
	*a -= *b;
}
