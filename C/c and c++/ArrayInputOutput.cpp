#include<stdio.h>
int main()
{
	//int Numbers[]={10,20,30,40};
	/*int Numbers[4];
	Numbers[0]=10;
	Numbers[1]=20;
	Numbers[2]=30;
	Numbers[3]=40;*/
	//taking input from user
	int Numbers[10];
	int size;
	printf("Enter the Array size:");
	scanf("%d",&size);
	for(int index=0;index<size;index++)
	{
		printf("Enter the value for %d position:",index+1);
		scanf("%d",&Numbers[index]);
	}
	//print the array value
	printf("\n......Elements are.......\n");
	for(int i=0;i<size;i++)
	{
		printf("%4d",Numbers[i]);
	}
	printf("\n......Reverse Elements are.......\n");
	for(int i=size-1;i>=0;i--)
	{
		printf("%4d",Numbers[i]);
	}
	printf("\n......Sum of Elements .......\n");
	int sum=0;
	for(int i=size-1;i>=0;i--)
	{
		//printf("%4d",Numbers[i]);
		sum=sum+Numbers[i];
	}
	printf("Sum:%d",sum);
	int max=Numbers[0];
	for(int i=0;i<size;i++)
	{
		if(max>Numbers[i])
		{
			max=Numbers[i];
		}
	}
	printf("\n Max number is:%d",max);
	return 0;
}
