#include <stdio.h>
main() {
	int x,r,m;
	int sum = 0;
	scanf("%d",&x);
	m = x;
	while(x>0) {
		r = x%10;
		sum = sum + r*r*r;
		x = x/10;
	}
	if (m == sum) {
		printf("%d is a Amstrong Number",m);
	} else {
		printf("%d is not a Amstrong12 Number",m);
	}
}
