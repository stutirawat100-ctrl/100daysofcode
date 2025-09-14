// Q8 Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>
int main()
{
    int n;                          // Declaration
    float sum;                      

    // User to input a number
    printf("Enter a no.  ");
    scanf("%d",&n);

    // Compute sum of first n natural no.
    sum=(n*(n+1))/2;

    printf("Sum of first %d natural no. = %.2f \n ",n,sum);     // Display SUM
    return 0;
}                                  // END of program