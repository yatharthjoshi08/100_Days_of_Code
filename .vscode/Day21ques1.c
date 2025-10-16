//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
int main() {
    int num, FirstDigit, LastDigit, DigitsCount = 0, SwappedNum, temp, power = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    LastDigit = temp % 10;
    while (temp >= 10) {
        temp /= 10;
        power *= 10;
        DigitsCount++;
    }
    FirstDigit = temp;
    SwappedNum = (num % power) / 10;
    SwappedNum = LastDigit * power + SwappedNum * 10 + FirstDigit;
    printf("Number after swapping first and last digit: %d\n", SwappedNum);
    return 0; }
