#include <stdio.h>
#include <string.h>

void reverseWords(char* sentence) {
    // Reverse the entire sentence
    strrev(sentence);

    // Reverse each word individually
    char* word = strtok(sentence, " ");
    while (word != NULL) {
        strrev(word);
        printf("%s ", word);
        word = strtok(NULL, " ");
    }
}

int main() {
    char sentence[] = "I LOVE INDIA";
    
    printf("Original sentence: %s\n", sentence);
    printf("Reversed sentence: ");
    
    reverseWords(sentence);
    
    printf("\n");
    
    return 0;
}

