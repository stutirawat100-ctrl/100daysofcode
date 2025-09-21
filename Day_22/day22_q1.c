// Q43 Write a program to check if a number is a strong number.

#include <stdio.h>
int main()
{
    int n, temp, rem, sum=0;                   // Declaration

    // User to input a no.
    printf("Enter a number: ");
    scanf("%d",&n);

    // Compute the sum of its digit's factorial
    temp=n;
    while(n>0)
    {
        rem=n%10;
        int f=1;
        for(int i=1;i<=rem;i++)
        {
            f*=i;
        }
        sum+=f;
        n=n/10;
    }

    // Check if a number is a strong number.
    if(sum==temp)
        printf("%d is a Strong Number. \n ",temp);
    else
        printf("%d is not a Strong Number. \n ",temp);
    
    return 0;
}                                               // END of the program 
