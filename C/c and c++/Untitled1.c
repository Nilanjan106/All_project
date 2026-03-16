#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],n,i,s=0,avg,sum;
	printf("\n Enter how many number you want\n");
	scanf("%d",&n);
	printf("\n Enter array element one by one\n");
	for(i=1;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		s=s+a[i];
		avg=(float)s/n
	}
	printf("\n sum= %d",sum);
	printf("\n avarage=%d",avg);
	getch();
}
