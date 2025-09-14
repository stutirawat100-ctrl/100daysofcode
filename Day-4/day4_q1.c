// Q7 Write a program to swap two numbers without using a third variable.

#include <stdio.h>
int main()
{
    int num1,num2;                      // Declaration

    // User to input two numbers
    printf("Enter first no.  ");
    scanf("%d",&num1);
    printf("Enter second no.  ");
    scanf("%d",&num2);

    // Swap two numbers
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;

    printf("After swaping: \n%d %d \n ",num1,num2);           // Display result
    return 0;
}                                      // END of program
