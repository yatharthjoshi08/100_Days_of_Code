//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include <stdio.h>
int main() {
    float CP, SP, ProfitOrLoss, Percentage;
    printf("Enter the Cost Price: ");
    scanf("%f", &CP);
    printf("Enter the Selling Price: ");
    scanf("%f", &SP);
    if (SP > CP) {
        ProfitOrLoss = SP - CP;
        Percentage = (ProfitOrLoss / CP) * 100;
        printf("Profit = %.2f\n", ProfitOrLoss);
        printf("Profit Percentage = %.2f%%\n", Percentage);
    } else if (CP > SP) {
        ProfitOrLoss = CP - SP;
        Percentage = (ProfitOrLoss / CP) * 100;
        printf("Loss = %.2f\n", ProfitOrLoss);
        printf("Loss Percentage = %.2f%%\n", Percentage);
    } else {
        printf("No profit no loss.\n");
    }
    return 0; }
