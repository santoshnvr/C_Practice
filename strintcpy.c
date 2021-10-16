#include<stdio.h>
void stringcpy(char*, char*);

int main() {
	char *s;
	char *t = "1234567";
	stringcpy(s,t);
	printf("Copied string is %s\n", s);
return 0;
}

void stringcpy(char *s, char *t) {
	int i = 0;
	while((s[i] = t[i]) != '\0') i++;
}
