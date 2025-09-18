// Q37 Write a program to find the LCM of two numbers.

#include <stdio.h>
int main()
{
    int n1, n2, max;             // Declaration

    // User to input two numbers
    printf("Enter first no: ");
    scanf("%d",&n1);
    printf("Enter second no: ");
    scanf("%d",&n2);

    // Comput LCM of two numbers
    if(n1>n2)
        max=n1;
    else
        max=n2;

    while(1)
    {
        if(max%n1==0 && max%n2==0)
        {
            printf("LCM of %d and %d is %d \n ",n1,n2,max);
            break;
        }

        max++;
    }

    return 0;
}                               // END of program
