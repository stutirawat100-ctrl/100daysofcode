// Q9 Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>
int main()
{
    int P,t;                            // Declaration
    float r,SI,CI;

    // User to enter details
    printf("Enter principal amount: ");
    scanf("%d",&P);
    printf("Enter rate of interest: ");
    scanf("%f",&r);
    printf("Enter time: ");
    scanf("%d",&t);

    SI=(P*r*t)/100;                     // Compute Simple Interest

    CI=(P * pow((1+r/100),t))-P;        // Comput Compound Interest

    printf("Simple Interest = %.2f \n",SI);
    printf("Compound Interest = %.2f \n ",CI);
    return 0;
}                                       // END of program
