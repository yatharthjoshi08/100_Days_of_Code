//Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/
#include <stdio.h>
int main() {
    int n, i;
    int PositiveCount = 0, NegativeCount = 0, ZeroCount = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        if (arr[i] > 0) {
            PositiveCount++;
        } else if (arr[i] < 0) {
            NegativeCount++;
        } else {
            ZeroCount++;
        }
    }
    printf("Number of positive elements: %d\n", PositiveCount);
    printf("Number of negative elements: %d\n", NegativeCount);
    printf("Number of zero elements: %d\n", ZeroCount);
    return 0; }
