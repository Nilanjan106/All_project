#include <stdio.h>
main() {
	int x,r,m;
	int sum = 0;
	scanf("%d",&x);
	m = x;
	while(x>0) {
		r = x%10;
		sum = sum + r;
		x = x/10;
	}
	printf("The sum of digits of %d is %d",m,sum);
}
