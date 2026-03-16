#include<stdio.h>
int gcd(int n1,int n2);
int main()
{
	int n1,n2,k;
	printf("Enter tow number: ");
	scanf("%d %d",&n1,&n2);
	k=gcd(n1,n2);
	printf("\n G.C.D. of %d and %d is %d",n1,n2,k);
	return 0;
}
int gcd(int m1,int m2)
{
	if(m2!=0)
	 return gcd(m2,m1%m2);
	else
	 return m1; 
}
