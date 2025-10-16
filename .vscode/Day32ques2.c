//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>
int main() {
    int number, digit;
    int frequency[10] = {0};
    int maxFreq = 0, maxDigit = 0;
    printf("Enter an integer number: ");
    scanf("%d", &number);
    if (number < 0) {
        number = -number;
    }
    while (number > 0) {
        digit = number % 10;
        frequency[digit]++;
        number /= 10;
    }
    for (int i = 0; i < 10; i++) {
        if (frequency[i] > maxFreq) {
            maxFreq = frequency[i];
            maxDigit = i;
        }
    }
    printf("The digit %d occurs the most, %d times.\n", maxDigit, maxFreq);
    return 0;
}
