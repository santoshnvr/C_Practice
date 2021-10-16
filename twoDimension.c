#include<stdio.h>
int main() {
	char *a[] = {"Santosh", "Santosh Kumar", "Santosh kumar chantati"};
	printf("array size is %lu and int size is %lu\n",sizeof(a), sizeof(char));
	int size = sizeof(a)/sizeof(char);
	printf("Size is %d", size);
	for(int i = 0; i < 3; i++) 
	printf("%s\n", *(a+i));
return 0;
}
