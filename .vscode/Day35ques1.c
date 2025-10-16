//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>
#include <limits.h>
int main() {
    int n, i, Largest, SecondLargest;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    Largest = INT_MIN;
    SecondLargest = INT_MIN;
    for (i = 0; i < n; i++) {
        if (arr[i] > Largest) {
            SecondLargest = Largest;
            Largest = arr[i];
        } else if (arr[i] > SecondLargest && arr[i] != Largest) {
            SecondLargest = arr[i];
        }
    }
    if (SecondLargest == INT_MIN) {
        printf("There is no second largest element.\n");
    } else {
        printf("The second largest element is: %d\n", SecondLargest);
    }
    return 0; }
