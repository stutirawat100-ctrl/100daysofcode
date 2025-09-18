// Q35 Write a program to print all factors of a given number

#include <stdio.h>
int main()
{
    int n;                          // Declaration

    // User to input a no.
    printf("Enter a number: ");
    scanf("%d",&n);

    // Print all the factors of a no.
    for(int i=1;i<=n;i++)
    {
        printf("%d ",i);
    }
    printf("\n ");

    return 0;
}                                  // END of program
