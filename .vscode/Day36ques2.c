//Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/
#include <stdio.h>
int main() {
    int row_size, column_size;
    printf("Enter the row size of the matrix: ");
    scanf("%d", &row_size);
    printf("Enter the column size of the matrix: ");
    scanf("%d", &column_size);
    int matrix[row_size][column_size];
    printf("Enter the matrix elements:\n");
    for(int i = 0; i < row_size; i++) {
        for(int j = 0; j < column_size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int sum = 0;
    for(int i = 0; i < row_size; i++) {
        for(int j = 0; j < column_size; j++) {
            sum += matrix[i][j];
        }
    }
    printf("Sum of given matrix elements is: %d\n", sum);
    return 0; }
