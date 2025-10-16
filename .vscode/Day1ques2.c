//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/

#include <stdio.h>
int main() {
    int x , y , sum , diff , product , quotient ;
    printf("Enter first number: \n");
    scanf("%d",&x);
    printf("Enter second number: \n");
    scanf("%d",&y);
    sum = x + y;
    diff = x - y;
    product = x * y;
    quotient = x / y;
    printf("The sum of two numbers is: %d\n" , sum);
    printf("The diff of two numbers is: %d\n" , diff);
    printf("The product of two numbers is: %d\n" , product);
    printf("The quotient of two numbers is: %d\n" , quotient);
return 0 ; }