// Q34 Write a program to check if a number is prime.

#include <stdio.h>
int main()
{
    int n, c=0;                // Declaration

    // User to input a no.
    printf("Enter a number: ");
    scanf("%d",&n);

    // Check if the no. is prime

    for(int i=2;i<=(n/2);i++)
    {
        if((n%i)==0)
        c++;
    }

    if(n<=1)
        printf("%d is not a Prime Number. \n ",n);
    
    else if(c==0)
        printf("%d is a Prime Number. \n ",n);
    
    else    
        printf("%d is not a Prime Number. \n ",n);

    return 0;
}                               // END of program