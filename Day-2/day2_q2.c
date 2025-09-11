// Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>
int main()
{
    float r,C,A;                // Decleration
    printf("Enter the radius o a circle: ");
    scanf("%f",&r);

    C=2*3.14*r;                 // CIRCUMFERENCE

    A=3.14*r*r;                 // AREA

    printf("Circumference of the circle = %.2f \n",C);
    printf("Area of the circle = %.2f \n ",A);
    return 0;
}