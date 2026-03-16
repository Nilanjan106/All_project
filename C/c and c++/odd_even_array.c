#include<stdio.h>
#include<conio.h>
void main()
{
	int i, n,a[20];
	printf("how many number you want :");
	scanf("%d",&n);
	printf("enter number one by one :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	
	
	if(a[i]%2==0)
	{
		printf("even number =%d\n",a[i]);
	}
	else
	{
		printf("odd number=%d\n",a[i]);
	}
}
getch();
}
