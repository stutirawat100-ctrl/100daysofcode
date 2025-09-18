// Q36 Write a program to find the HCF (GCD) of two numbersWrite a program to find the HCF (GCD) of two numbers.

#include <stdio.h>
int main()
{
    int n1, n2, temp;             // Declaration

    // User to input two numbers
    printf("Enter first no: ");
    scanf("%d",&n1);
    printf("Enter second no: ");
    scanf("%d",&n2);

    // Comput GCD of two no.
    while(n2!=0)
    {
        temp=n2;
        n2=n1 % n2;
        n1=temp;
    }

    printf("GCD: %d \n ",n1);

    return 0;
}                               // END of program