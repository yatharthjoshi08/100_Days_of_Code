//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define CHAR_RANGE 256
int areAnagrams(char str1[], char str2[]) {
    int count[CHAR_RANGE] = {0};
    int i;
    if (strlen(str1) != strlen(str2)) {
        return 0;
    }
    for (i = 0; str1[i] != '\0'; i++) {
        count[(unsigned char)tolower(str1[i])]++;
    }
    for (i = 0; str2[i] != '\0'; i++) {
        count[(unsigned char)tolower(str2[i])]--;
    }
    for (i = 0; i < CHAR_RANGE; i++) {
        if (count[i] != 0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    char str1[1000], str2[1000];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';
    if (areAnagrams(str1, str2)) {
        printf("Strings are anagrams.\n");
    } else {
        printf("Strings are not anagrams.\n");
    }
    return 0; }
