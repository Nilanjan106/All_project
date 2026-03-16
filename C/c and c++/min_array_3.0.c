#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,a[10],min;
	printf("\n How many array elememnt you entered: ");
	scanf("%d",&n);
	printf("\n Enter arrayb element one by one:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
		printf("\n Minimum element=%d\n",min);
	}
	getch();
}
