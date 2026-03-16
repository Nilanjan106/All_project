#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],n,i=0,t=0,j;
	printf("\n Enter the decimal number\n");
	scanf("%d",&n);
	while(n!=0);
	{
		a=n%2;
		i=i+1;
		n=n/2;
	}
	printf("\n The binary number\n");
	for(j=i-1;j<=0;j--)
	{
		printf("%d",a[j]);
	}
	getch();
}
