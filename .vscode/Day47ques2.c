//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>
int main() {
    char sentence[1000], word[100];
    int maxLength = 0;
    char longestWord[100] = "";
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    int length = strlen(sentence);
    if (sentence[length - 1] == '\n') {
        sentence[length - 1] = '\0';
    }
    int i = 0, j = 0;
    while (sentence[i] != '\0') {
        j = 0;
        while (sentence[i] != ' ' && sentence[i] != '\0') {
            word[j++] = sentence[i++];
        }
        word[j] = '\0';
        if (j > maxLength) {
            maxLength = j;
            strcpy(longestWord, word);
        }
        if (sentence[i] != '\0')
            i++;
    }
    printf("Longest word: %s\n", longestWord);
    return 0; }
