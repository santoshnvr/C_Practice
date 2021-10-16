#include<stdio.h>

void printOptions();

int main() {
	int c;
	do{
	printOptions();
        c = scanf("%d", &c);
        switch(c){
                case 1: printf("Selected 1\n");
                break;
                case 2: printf("Selected 2\n");
                break;
                case 3: printf("Selected 3\n");
                break;
                case 4: printf("Selected 4\n");
                break;
				case 5: printf("Selected 5\n");
				break;
				case 6: printf("Selected 6\n");;
				break;
                default: printf("Please enter one of the above options\n");
                break;
        }
 	} while(c != 6);

	return 0;
}


void printOptions() {
	printf("Select one option\n");
        printf("        1-> Insert at the begining\n");
        printf("        2-> Insert at the end\n");
        printf("        3-> Delete first \n");
        printf("        4-> Delete last \n");
        printf("        5-> Display list\n");
		printf("	    6-> Exit\n");
}