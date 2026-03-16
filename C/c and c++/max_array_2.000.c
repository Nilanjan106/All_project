# include<stdio.h>
# include<conio.h>
void main()
{
	int i,n,a[10],max;
	printf("how many number you want: ");
	scanf("%d",&n);
	printf("enter number one by one: ");
	max=a[0];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
		if(max<a[i])
		{
			max=a[i];
		}
	}
	printf("max=%d,",i,max);
	getch();
}
