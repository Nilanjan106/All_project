# include<stdio.h>
# include <conio.H>
void main()
{
	int n,i,j,k,a[10],t;
	printf ("how many number you want:");
	scanf("%d",&n);
	printf("enter one by:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		k=a[i];
		for(j=i+1;j<n;j++)
		{
			if (k==a[j])
			{
				for (t=j;t<n;t++)
			{
					a[t]=a[t+1];
		}
				n--;
				j--;
				
		}
		}
	}
	printf("result=");
	for (j=0;j<n;j++)
	{
		printf("%d,",a[j]);
	}
	getch();
}
