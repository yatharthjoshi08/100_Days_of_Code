//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/
#include <stdio.h>
int main() {
    float x, y, z;
    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%f %f %f", &x, &y, &z);
    if ((x + y > z) && (y + z > x) && (z + x > y)) {
        if (x == y && y == z) {
            printf("The triangle is Equilateral.\n");
        } else if (x == y || y == z || x == z) {
            printf("The triangle is Isosceles.\n");
        } else {
            printf("The triangle is Scalene.\n");
        }
    } else {
        printf("The entered sides do not form a valid triangle.\n");
    }
    return 0; }
