//Q25 Write a program to calculate the factorial of a number.

#include <stdio.h>
int main() 
{
    int n, i, f = 1;                    // Declaration

    // Input a number
    printf("Enter the number of odd terms (n): ");
    scanf("%d", &n);

    // Calculate factorial
    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    
    printf("%d\n", f);

    return 0;
}                                      // END of program
