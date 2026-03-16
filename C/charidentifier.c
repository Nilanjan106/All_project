#include <stdio.h>
main() {
	char ch;
	scanf("%c",&ch);
	if (ch >= 'A' && ch <= 'Z') {
		printf("The character %c is capital",ch);
	} else if (ch >= 'a' && ch <= 'z') {
		printf("The character %c is small",ch);
	} else if (ch > '0' || ch < '0') {
	printf("The character %c is digit",ch);
	} else {
		printf("The character %c is special character",ch);
	}
}
