/* Q55 Write a program to print all the prime numbers from 1 to n. */

#include <stdio.h>
int main()
{
    int n, c;                      // Declaration

    // User to input a Number
    printf("Enter a number: ");
    scanf("%d",&n);

    // Loop to print prime no.
    for(int i=2;i<=n;i++)
    {
        c=0;
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            c++;
        }
        if(c==0)
        printf("%d ",i);
    }

    return 0;
}                                       // END of program
