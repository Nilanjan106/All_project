#include<stdio.h>
#include<conio.h>
int main()
{
	int a[30],i,j,n,c,k;
	printf("\n Enter your number\n");
	scanf("%d",&n);
	printf("\n Enter number one by one\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i])
	}
	c=0;
	k=a[i];
	for(j=i+1;j<n;j++)W
	{
	if(k==a[j])
	c++;
	}
	if(c>0)
	{
	printf("\n duplicate number is %d and occur %d time \n",k,c);
	}
	return 0;
	}
	
                                                 
