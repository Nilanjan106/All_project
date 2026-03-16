# include<stdio.h>
# include<conio.h>
void main()
{
	int i,j,n,a[10],b=0,m,max,min,v,k,c=0,t;
	printf("enter 1 for even or odd value \n enter 2 for sum and avg \n enter 3 for max and min of the array \n and enter 4 for reverce number of array \n enter 5 for remove duplicate ");
	printf ("\nenter your choice :");
	scanf("%d",&m);
	printf ("how many number you want : ");
	scanf("%d",&n);
	printf ("enter number one by one: ");
	
	switch(m)
	{
		case 1:
			{
				for (i=0;i<n;i++)
				{
					scanf("%d",&a[i]);
				}
				for(i=0;i<n;i++)
				{
				
					if (a[i]%2==0)
					{
						printf("even value is : %d",a[i]);
					}
					else
					printf("\nodd value is: %d",a[i]);
				}
				
				break;
			}
			
		case 2:
			{
				for (i=0;i<n;i++)
				{
					scanf("%d",&a[i]);
					b=b+a[i];
					v=b/n;
					
				}
				printf("the sum of the number : %d",b);
			    printf("\n the avg of the number: %d",v);
					
				break;
			}
		case 3:
			{
			
				for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	(max=min=a[0]);
	for(i=0;i<n;i++)
	{
	
		if(max<a[i])
		{
			max=a[i];
		}
		if(min>a[i])
		{
			min=a[i];
		}
	}
	printf("maximum number is = %d\n minimum number is = %d",max,min);
	       break;
			}
				
				
			
			case 4:
				{
					for (i=0;i<n;i++)
					{
						scanf("%d",&a[i]);
						
					}
					printf("the riverse number is :");
					for(i=n-1;i>=0;i--)
					{
						printf("%d,",a[i]);
					}
					break;
				}
				
				
				case 5:
					{
					
					for (i=0;i<n;i++)
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
	for (j=0;j<n;j++)
	{
		printf("%d,",a[j]);
	}
				break;
			}
					
				
					
					
			
	}
	getch();
}
