#include<stdio.h>
int main() {
	int a[] = {10,20,30,40,50,60};
	int *p[] = {a, a+1, a+2, a+3, a+4, a+5};
	int **pp  = p;

	printf("Direct access value at index 3 %d\n", a[3]);
	printf("pointer access value at index 3 %d\n", *p[3]);

	printf("Access 2nd element by pointer arithmatics on pointer array\n");
	printf("Value in p[0] is %p\n", p[0]);
	int *arithmeticValue = p[0];
	arithmeticValue++;
	arithmeticValue++;
	printf("Arithmentic access value at 2nd index is %d\n", *arithmeticValue);
	
	printf("pointer access to 2nd element of array a is %d\n", *p[2]);

	printf("What is value of **pp %u\n", **pp);
	printf("What is value of ++(**pp) %u\n", ++(**pp));
	printf("What is value of **(pp+1) %u\n", **(pp + 1));

	/* int r = 10;
	int *q = &r;
	int **rq = &q;

	printf("Facts===========\n");
	printf("value of r and address of r is %d, %u\n",r, &r);
	printf("value of q and address of q is %lu, %u\n",q, &q);
	printf("value of rq and address of rq is %lu, %u\n", rq, &rq);

	printf("-----------------\n");
*/
return 0;
}
