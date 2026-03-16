#include<stdio.h>
#include<conio.h>
int main()
{
	int Numbers[10];
	int size,index,i;
	printf("Enter the Array size:");
	scanf("%d",&size);
	for(index=0;index<size;index++)
	{
		printf("Enter the value for %d position:",index+1);
		scanf("%d",&Numbers[index]);
	}
	//print the array value
	printf("\n......Elements are.......\n");
	for(i=0;i<size;i++)
	{
		printf("%4d",Numbers[i]);
	}
	return 0;
}
