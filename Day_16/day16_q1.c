// Q31 Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>
// Compute its equivalent binary form
int abc(int n)
{
    if (n == 0)
        return (0);

    else 
        return abc(n/2) * 10 +(n%2);
}

int main()
{
    int n;                      // Declaration

    // User to input a no.
    printf("Enter a number: ");
    scanf("%d",&n);

    printf("Binary Representation of %d: \n",n);
    printf("%d", abc(n));
    printf("\n ");
    
    return 0;
}                               // END of program
