#include <stdio.h>
factorial(int n) {
	if(n<=0) {
		return 1;
	} else {
		return n*factorial(n-1);
	}
}
int main () {
	int n,r,c,sum;
	printf("Enter number\n");
	scanf("%d",&n);
	c=n;
	while(n!=0) {
		r = n%10;
		sum = sum+factorial(r);
		n = n/10;
	}
	if (sum==c) {
		printf("This is a strong number");
	} else {
		printf("This is not a strong number");
	}
	return 0;
}

