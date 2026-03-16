#include<stdio.h>
int sum(int n);
int main()
{
	int n,s,i,k;
	printf("\nEnter number what you want: ");
	scanf("%d",&n);
	k=sum(n);
	for(i=0;i<=n;i++)
	{
		s=s+i;
	}
	printf("\nSum=%d",k);
	return 0;
}
int sum(int n)
{
	int s,i;
	return (s+i);
}
