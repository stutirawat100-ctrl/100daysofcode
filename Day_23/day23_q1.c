// Q45 Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>
int main()
{
    int n, temp;
    float sum=0, p, nu=2, d=3;                   // Declaration

    // User to input a no.
    printf("Enter a number: ");
    scanf("%d",&n);

    // Find the sum of series
    for(int i=1;i<=n;i++)
    {
        p=nu/d;
        sum+=p;
        nu+=2;
        d+=4;
    }

    printf("Sum of the series = %.2f \n ",sum);
    return 0;
}                                               // END of program 
