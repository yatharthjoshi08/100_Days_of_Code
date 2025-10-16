//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
    char name[1000];
    char *words[100];
    int wordCount = 0;
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    char *token = strtok(name, " ");
    while (token != NULL) {
        words[wordCount++] = token;
        token = strtok(NULL, " ");
    }
    for (int i = 0; i < wordCount - 1; i++) {
        if (words[i][0] != '\0') {
            printf("%c. ", toupper(words[i][0]));
        }
    }
    if (wordCount > 0) {
        printf("%s\n", words[wordCount - 1]);
    }
    return 0; }
