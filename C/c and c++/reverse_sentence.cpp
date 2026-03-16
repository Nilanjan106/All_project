#include<stdio.h>
#include<string.h>
void revsent(char *sentence,int length)
{
	for(int i=length-1;i>=0;i--)
	{
		printf("%c",sentence[i]);
	}
}
int main()
{
	char sentence[]="I LOVE INDIA";
	int length= strlen(sentence);
	revsent(sentence,length);
	printf("\n");
	return 0;
}
