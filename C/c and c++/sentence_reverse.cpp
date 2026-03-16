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
	printf("Original Sentence: %s\n",sentence);
	printf("Reverse sentence: ");
	revword(sentence);
	printf("\n");
	return 0;
}
