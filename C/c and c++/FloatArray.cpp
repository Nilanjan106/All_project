#include<stdio.h>
int main()
{
	float Marks[3];
	for(int i=0;i<3;i++)
	{
		printf("Enter marks:");
		scanf("%f",&Marks[i]);
	}
	for(int i=0;i<3;i++)
	{
		printf("%f  ",Marks[i]);
	}
	return 0;
}
