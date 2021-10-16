#include<stdio.h>
int main() {
	int b = 10, *p;
	printf("Empty pointer is %u", p);
	p = &b;
	printf("Value of b is %d\n", b);
	printf("Address of b is %u\n", &b);
	printf("Value in p is %u\n", p);
	printf("Address of p is %u\n", &p);
	printf("value at address in p is %d\n", *p);

	// int a = *p;
	// printf("Value of p %d, Value of *p %d\n", p, *p);
return 0;
}
