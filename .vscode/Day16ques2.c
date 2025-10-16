//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include <stdio.h>
int main() {
    int num, OriginalNumber, Reversed = 0, Remainder;
    printf("Enter a number: ");
    scanf("%d", &num);
    OriginalNumber = num;
    while (num != 0) {
        Remainder = num % 10;
        Reversed = Reversed * 10 + Remainder;
        num /= 10;
    }
    if (OriginalNumber == Reversed) {
        printf("%d is a Palindrome Number.\n", OriginalNumber);
    } else {
        printf("%d is not a Palindrome Number.\n", OriginalNumber);
    }
    return 0; }
