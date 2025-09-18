// Q39 Write Write a program to find the product of odd digits of a number.

#include <stdio.h>
int main()
{
    int n, pro=1, rem;                          // Declaration

    // User to input a no.
    printf("Enter a number: ");
    scanf("%d",&n);

    // Compute the product of odd digits of a number
    while(n>0)
    {
        rem=n%10;
        if(rem%2!=0)
        {
        pro*=rem;
        }
        n=n/10;
    }

    printf("PRODUCT OF ODD DIGITS = %d \n ",pro);

    return 0;
}                                              // END of program 
