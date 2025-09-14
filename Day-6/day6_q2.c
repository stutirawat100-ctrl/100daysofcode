// Q12 Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h>
int main()
{
    int n;                  // Declaration

    // User to input a no.
    printf("Enter a number: ");
    scanf("%d",&n);

    // Check whether no. is positivr, negative or zero
    if(n>0)
        printf("%d is a positive integer. \n ",n);
    else if(n<0)
        printf("%d is a negative integer. \n ",n);
    else
        printf("%d is zero. \n ",n);

    return 0;
}                           // END of program