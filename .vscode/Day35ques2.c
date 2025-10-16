//Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include <stdio.h>
void RotateRightByOne(int arr[], int size) {
    int last = arr[size - 1];
    for (int i = size - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;
}
void RightRotate(int arr[], int size, int k) {
    k = k % size;
    for (int i = 0; i < k; i++) {
        RotateRightByOne(arr, size);
    }
}
void PrintArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int size, k;
    printf("Enter number of elements in array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter number of positions to rotate right: ");
    scanf("%d", &k);
    RightRotate(arr, size, k);
    printf("Array after %d right rotations:\n", k);
    PrintArray(arr, size);
    return 0; }
