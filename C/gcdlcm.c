#include <stdio.h>
int gcd(int a,int b) {
	if(b==0) {
		return a;
	} else {
		gcd(b,a%b);
	}
}
lcm(int a,int b) {
	return a*b/gcd(a,b);
}
int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	int  result = gcd(a,b);
	printf("%d",result);
	return 0;
}
