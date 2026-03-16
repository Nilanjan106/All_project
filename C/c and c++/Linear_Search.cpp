#include<stdio.h>
#include<conio.h>
int main()
{
	float a[20],k=0,item;
	int n,i;
	printf("\n enter how many number you want\n");
	scanf("%d",&n);
	printf("\nEnter data one by one");
	for(i=0;i<n;i++)
	{
		scanf("%f",a[i]);
	}
	printf("\n Enter data from outside\n");
	{
	scanf("%f",&item);
    }
    for(i=0;i<n;i++)
    {
	  if(item==a[i])
	  {
		k=1;
		break;
	  } 
    }
    if(k==1)
    {
	  printf("\n Search is succesful\n");
    }
    else
    {
	  printf("\n Search is not sucessful\n");
    }
    getch();
}
