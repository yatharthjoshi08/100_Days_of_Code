//Q87: Count spaces, digits, and special characters in a string.

/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/
#include <stdio.h>
int main() {
    char str[100];
    int SpaceCount = 0, DigitCount = 0, SpecialCharCount = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        char ch = str[i];
        if (ch == ' ') {
            SpaceCount++;
        } else if (ch >= '0' && ch <= '9') {
            DigitCount++;
        } else if ((ch >= 33 && ch <= 47) || (ch >= 58 && ch <= 64) ||
                   (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 126)) {
            SpecialCharCount++;
        }
    }
    printf("Spaces: %d\n", SpaceCount);
    printf("Digits: %d\n", DigitCount);
    printf("Special characters: %d\n", SpecialCharCount);
    return 0; }
