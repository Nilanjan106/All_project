#include <stdio.h>
#include <string.h>
int main() 
{
    char sentence[] = "I LOVE INDIA";
    int length = strlen(sentence);
    printf("Original sentence: %s\n", sentence);
    printf("Reversed sentence: ");
    for (int i = length - 1; i >= 0; i--) 
	{
        printf("%c", sentence[i]);
    }
    printf("\n");
    return 0;
}
