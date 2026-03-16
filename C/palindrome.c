#include <stdio.h>
main() {
	int x,r,m;
	int sum = 0;
	scanf("%d",&x);
	m = x;
	while(x>0) {
		r = x%10;
		sum = sum*10 + r;
		x = x/10;
	}
	if (m == sum) {
		printf("%d is a Palindrome Number",m);
	} else {
		printf("%d is not a Palindrome Number",m);
	}
}
