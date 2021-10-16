#include<stdio.h>
int stringcmp(char*, char*);
int main() {
	char *s = "Santosh";
	char *t = "Santoshk";
	int compare = stringcmp(s,t);
	if(compare == 0) {
		printf("both are equal\n");
	} else if(compare < 0) {
		printf("t is greatest\n");
	} else {
		printf("s is greatest\n");
	}
return 0;	
}

int stringcmp(char *s, char *t) {
	for ( ; *s++ == *t++; ) {
		if((*s == '\0') & (*t == '\0')) return 0;
	}
	return *s - *t;
}
