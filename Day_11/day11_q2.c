// Q22 Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>
int main() 
{
    float cp, sp, percent;          // Declaration

    // Input cost price and selling price
    printf("Enter Cost Price: ");
    scanf("%f", &cp);

    printf("Enter Selling Price: ");
    scanf("%f", &sp);

    // Check for profit or loss
    if (sp > cp) {
        percent = ((sp - cp) / cp) * 100;
        printf("Profit Percentage = %.2f%%\n", percent);
    } else if (cp > sp) {
        percent = ((cp - sp) / cp) * 100;
        printf("Loss Percentage = %.2f%%\n", percent);
    } else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}                                   // END of program