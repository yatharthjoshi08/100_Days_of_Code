//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include <stdio.h>
int main() {
    int n, i, Target, FoundIndex = -1;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &Target);
    for (i = 0; i < n; i++) {
        if (arr[i] == Target) {
            FoundIndex = i;
            break;
        }
    }
    if (FoundIndex != -1) {
        printf("Element %d found at index %d\n", Target, FoundIndex);
    } else {
        printf("Element %d not found in the array\n", Target);
    }
    return 0;
}
