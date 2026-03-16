#include<stdio.h>
#include<conio.h>
void main()
{
	int gcd(int,int);
	int n1,n2;
	printf("\n Enter two number\n");
	scanf("%d %d",&n1,&n2);
	k=gcd(n1,n2);
	printf("G.C.D. of %d and %d is %d ",n1,n2,gcd(n1,n2));
	getch();
}
int gcd(int n1,in1 n2)
{
	if(n2!=0)
	 return gcd(n2,n1%n2);
	else
	 return n1; 
}
