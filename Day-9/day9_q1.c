// Q17 Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c;              // Declaration
    float root1,root2,D;

    // User to input a quadratic equation
    printf("Enter a quadratic equation: ");
    scanf("%f %f %f",&a,&b,&c);

    // Categorize the roots of the quadratic equation
    D= ((b*b)-(4*a*c));

    // Compute the roots of the quadratic equation
    if(D>0)
    {
        root1 = (-b + sqrt(D)) / (2*a);
        root2 = (-b - sqrt(D)) / (2*a);
        printf("Roots are real and different: %.2f, %.2f\n ",root1,root2);
    }

    else if(D==0)
    {
        root1 = -b / (2*a);
        printf("Roots are real and same: %.2f \n ",root1);
    }
    
    else
    printf("Roots are Complex: \n ");

    return 0;
}                                // END of program
