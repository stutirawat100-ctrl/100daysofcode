// Q42 Write a program to check if a number is a perfect number.

#include <stdio.h>
int main()
{
    int n, sum=0;                   // Declaration

    // User to input a no.
    printf("Enter a number: ");
    scanf("%d",&n);

    // Compute sum of divisors excluding the no. itself
    for(int i=1;i<=n/2;i++)
    {
        if(n%i==0)
            sum+=i;
    }

    // Check if no. is a perfect no. or not.
    if(sum==n)
        printf("%d is a Perfect Number. \n ",n);
    else
        printf("%d is not a Perfect Number. \n ",n);

    return 0;
}                                   // END of program