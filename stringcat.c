#include<stdio.h>
/* Concatinate second char to first char pointer */
void stringcat(char *, char *);

int main() {
	char *s = "santosh";
	char *t = "kumar";
	++s;
	*s = 'i';
	printf("%s\n", s);
	printf("s value is %p and ++ is %p\n", s, ++s);
	// stringcat(s, t);
	printf("stiring value after concatinating is %s\n", s);
return 0;
}

void stringcat(char *s, char *t) {
}
