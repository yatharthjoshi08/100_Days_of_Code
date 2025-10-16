//Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/
#include <stdio.h>
int main() {
    int x, y, z, greatest;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);
    if (x >= y) {
        if (x >= z) {
            greatest = x;
        } else {
            greatest = z;
        }
    } else {
        if (y >= z) {
            greatest = y;
        } else {
            greatest = z;
        }
    }
    printf("The largest number is %d\n", greatest);
    return 0;
}
