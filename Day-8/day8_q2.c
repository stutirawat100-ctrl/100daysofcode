// Q16 Write a program to input three numbers and find the largest among them using if–else.

#include <stdio.h>
int main()
{
    int n1,n2,n3;               // Declaration

    // User to input three numbers
    printf("Enter first no.  ");
    scanf("%d",&n1);
    printf("Enter second no.  ");
    scanf("%d",&n2);
    printf("Enter third no.  ");
    scanf("%d",&n3);

    // To find the largest among them using if–else.
    if((n1>=n2)&&(n1>=n3))
        printf("%d is the Largest no. \n ",n1);
    
    else if((n2>=n1)&&(n2>=n3))
        printf("%d is the Largest no. \n ",n2);

    else
        printf("%d is the Largest no. \n ",n3);

    return 0;
}                               // END of program