#include <stdio.h>
#include <string.h>

void reverseSentence(char *sentence) {
    int length = strlen(sentence);
    int i, j;

    // Reversing the whole sentence
    for (i = 0, j = length - 1; i < j; i++, j--) {
        char temp = sentence[i];
        sentence[i] = sentence[j];
        sentence[j] = temp;
    }

    // Reversing individual words
    i = 0;
    while (i < length) {
        j = i;
        while (sentence[j] != ' ' && sentence[j] != '\0') {
            j++;
        }
        int start = i;
        int end = j - 1;
        while (start < end) {
            char temp = sentence[start];
            sentence[start] = sentence[end];
            sentence[end] = temp;
            start++;
            end--;
        }
        i = j + 1;
    }
}

int main() {
    char sentence[] = "I LOVE INDIA";
    printf("Original sentence: %s\n", sentence);
    reverseSentence(sentence);
    printf("Reversed sentence: %s\n", sentence);

    return 0;
}

