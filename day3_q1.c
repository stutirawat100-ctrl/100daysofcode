// Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>
int main()
{
    int C,F;                                            // Declaration
    printf("Enter the temperature in Celsius. ");
    scanf("%d",&C);

    F=((9*C)/5)+32;                                    // Computing temp. in Fahrenhiet

    printf("Fahrenheit = %d \n ",F);                   // Display Temp.
    return 0;
}