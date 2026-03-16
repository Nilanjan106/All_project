#include<stdio.h>
main () {
	int i,reverse,number;
	printf("Enter the number \n");
	scanf("%d",&number);
	while(number !=0) {
		reverse = reverse*10+(number%10);
		number = number/10;
	}
	while (reverse!=0) {
		
	switch (reverse%10) {
		case 1 : printf("One ");
		break;
		case 2 : printf("Two ");
		break;
		case 3 : printf("Three ");
		break;
		case 4 : printf("Four ");
		break;
		case 5 : printf("Five ");
		break;
		case 6 : printf("Six ");
		break;
		case 7 : printf("Seven ");
		break;
	    case 8 : printf("Eight ");
		break;
		case 9 : printf("Nine ");
		break;	
		case 0 : printf("Zero ");
		break;
		default : printf("Invalid input");
		break;
	}
	reverse = reverse/10;
	}
}
