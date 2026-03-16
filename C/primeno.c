#include <stdio.h>
main() {
	int x,i;
	int count = 0;
	scanf("%d",&x);
	for ( i = 2;i < x;i++) {
		if (x%i == 0) {
			break;
		} 	printf("%d is not a prime no",x);
		else {
			printf("%d is a prime no",x);
		}
	}
	


}
