#include<stdio.h>
int multi(int n1,int n2);
int main()
{
	int n1,n2,mul;
	printf("\nEnter two number\n");
	scanf("%d%d",&n1,&n2);
	mul=multi(n1,n2);
	printf("\nMul=%d",mul);
	return 0;
}
int multi(int n1,int n2)
{
	return (n1*n2);
}
