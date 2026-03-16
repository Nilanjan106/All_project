#include<stdio.h>
int sub(int n1,int n2);
int main()
{
	int n1,n2 ,subst;
	printf("\nEnter two number\n");
	scanf("%d%d",&n1,&n2);
	subst=sub(n1,n2);
	printf("\nSub=%d",subst);
	return 0;
}
int sub(int n1,int n2)
{
	return (n1-n2);
}
