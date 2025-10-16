//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>
void diagonalTraversal(int rows, int columns, int matrix[rows][columns]) {
    int i, j, line;
    for (line = 1; line <= (rows + columns - 1); line++) {
        int startCol = (line > rows) ? (line - rows) : 0;
        int count = (line > columns + startCol) ? (rows + columns - line) : line - startCol;
        for (j = 0; j < count; j++) {
            i = (line > rows) ? (rows - j - 1) : (line - j - 1);
            int col = startCol + j;
            printf("%d ", matrix[i][col]);
        }
    }
    printf("\n");
}
int main() {
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d%d", &rows, &cols);
    int matrix[rows][cols];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);
    printf("Diagonal traversal of the matrix:\n");
    diagonalTraversal(rows, cols, matrix);
    return 0; }
