#include<stdio.h>

// void stringcpy(char *, char *);

void stringcpy(char *a, char *b) {
        printf("Value of s is %s\n", *b);
        printf("Value of u is %s\n", *a);
}

int main() {
	char *s = "Santosh", *u = "";
	printf("string value is: %s\n", s);
	printf("string value is: %s\n", u);
        printf("address of : %u\n", &u);
	printf("address of s %u\n", &s);
	stringcpy(s, u);
//	stringcpy(&u, &s);
	// printf("Value in U is %s\n", *u);
return 0;
}

/*
void stringcpy(char *a, char *b) {
	printf("Value of s is %s\n", *b);
	printf("Value of u is %s\n", *a);
} */
