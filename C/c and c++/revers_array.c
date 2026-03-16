#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,a[20],j;
	printf("how many number you want: ");
	scanf("%d",&n);
	printf("enter number one by one: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("Reverse number is :");
	for(j=n-1;j>=0;j--)
	{
		printf("a[%d]=%d\n",j,a[j]);
	}
	getch();
}
