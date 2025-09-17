// Q27 Write a program to print the sum of the first n odd numbers.

#include <stdio.h>
int main() 
{
    int n, i, sum = 0;              // Declaration

    // Input a number
    printf("Enter the number of odd terms (n): ");
    scanf("%d", &n);

    // Calculate sum of first n odd numbers
    for (i = 1; i <= n; i++) 
    {
        int odd = 2 * i - 1;
        sum += odd;
    }

    printf("%d\n", sum);

    return 0;
}                                   // END of program 
