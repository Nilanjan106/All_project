#include<stdio.h>
#include<conio.h>
#include<string.h>
void revword(char* sentence)
{
	strrev(sentence);
	char* word=strtok(sentence," ");
	while(word!=NULL)
	{
		strrev(word);
		printf("%s ",word);
		word=strtok(NULL," ");
	}
}
int main()
{
	char sentence[]="I LOVE INDIA";
	int length= strlen(sentence);
	printf("Original Sentence: %s\n",sentence);
	printf("Reverse sentence: ");
	for(int i=length-1;i>=0;i--)
	{
		printf("%c",sentence[i]);
	}
	revword(sentence);
	printf("\n");
	return 0;
}
