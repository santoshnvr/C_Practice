#include<stdio.h>
struct node {
	int i;
	int c;
};

int main() {
	struct node a, *p;
	a.i = 10;
	a.c = 20;
	p = &a;
	printf("Value at i is %d and c is %d\n", p->i, p->c);
	
/*	struct node a[2], *p;
	int b[2] = {30, 40};
	p = &a[0];
	a[0].i = 10;
	a[1].i = 20;
	a[0].c = b;
	printf("value of ++p->i %c", ++p->i);
*/
return 0;
}
