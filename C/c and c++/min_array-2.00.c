# include<stdio.h>
# include<conio.h>
void main()
{
	int i,n,a[10],min;
	printf("how many number you want: ");
	scanf("%d",&n);
	printf("enter number one by one: ");
	min=a[0];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("min=%d,",min);
	getch();
}
