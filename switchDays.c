#include<stdio.h>
int main(){
	printf("Please enter the day number: ");
	int dayNumber;
	scanf("%d", &dayNumber);

	switch(dayNumber){
	case 0:
		printf("M\n");
	break;
	case 1:
                printf("T\n");
        break;
	case 2:
                printf("W\n");
        break;
	case 3:
                printf("Thu\n");
        break;
	case 4:
                printf("F\n");
        break;
	case 5:
                printf("S\n");
        break;
	case 6:
                printf("Sun\n");
        break;
	default:
		printf("Not a valid number\n");
	break;
	}
	
return 0;
}
