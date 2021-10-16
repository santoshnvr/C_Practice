#include<stdio.h>
int stringLength(char s[]);
void stringReverse(char s[]);
int main() {
	char s[] = "Santosh kumar";
	stringReverse(s);
	printf("Reverse string is %s\n", s);
return 0;
}

void stringReverse(char s[]) {
	int i, j, c;
	i = j = 0;
	for(i=0, j = stringLength(s)-1; i < j; i++, j--) {
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}

int stringLength(char s[]) {
	int i = 0;
	while(*s++ != '\0') i++;
	return i;
}
