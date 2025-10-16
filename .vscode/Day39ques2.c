//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>
int main() {
    int size, sum = 0;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);
    int matrix[size][size];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < size; i++) {
        sum += matrix[i][i];
    }
    printf("Sum of main diagonal elements is: %d\n", sum);
    return 0; }
