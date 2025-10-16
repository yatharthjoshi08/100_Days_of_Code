//Q55: Write a program to print all the prime numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/
#include <stdio.h>
int main() {
    int n, i, j, Prime;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Prime numbers from 1 to %d are:\n", n);
    for (i = 2; i <= n; i++) {
        Prime = 1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                Prime = 0;
                break;
            }
        }
        if (Prime) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0; }
