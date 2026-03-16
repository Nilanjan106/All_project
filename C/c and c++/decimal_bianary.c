#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],n,i=0,j;
	printf("\n Enter the decimal number\n");
	scanf("%d",&n);
	while(n!=0)
	{
		a[i]=n%2;
		n=n/2;
		i++;
		printf("%d",a[i]);
	}
//	printf("%d \n",i);
	printf("\n The binary number\n");
//	printf("%d",a[0]);
//	printf("%d",a[1]);
//	printf("%d",a[2]);
	
//	for(i=0;i<=4;i++)
//	{
//		printf("%d",a[i]);
//	}
	
}
