#include<stdio.h>
#include<string.h>
int FindLength(char arr[]);
int main()
{
	char Name[20];
	printf("Enter your Name:");
	scanf("%s",&Name);
	int Len=FindLength(Name);
	printf("Length:%d\n",Len);
	printf("stlen:%d",strlen(Name));
	return 0;
}
int FindLength(char arr[])
{
	int count=0;
	int i=0;
	while(arr[i]!='\0')
	{
		count++;
		i++;
	}
	return count;
}
