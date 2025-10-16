//Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include <stdio.h>
int main() {
    int size;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);
    int matrix[size][size];
    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int Symmetric = 1;
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if(matrix[i][j] != matrix[j][i]) {
                Symmetric = 0;
                break;
            }
        }
        if(Symmetric == 0) break;
    }
    if(Symmetric) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }
    return 0; }
