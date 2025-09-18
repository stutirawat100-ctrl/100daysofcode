// Q38 Write a program to find the sum of digits of a number.

#include <stdio.h>
int main()
{
    int n, sum=0, rem;                          // Declaration

    // User to input a no.
    printf("Enter a number: ");
    scanf("%d",&n);

    // Comput sum of the digits of a number
    while(n>0)
    {
        rem=n%10;
        sum+=rem;
        n=n/10;
    }

    // Print the sum of digits of a number
    printf("SUM = %d \n ",sum);

    return 0;
}                                           // END of program