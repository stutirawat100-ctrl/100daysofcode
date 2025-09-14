// Q10 Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>
int main()
{
    int s;                          // Declaration
    int hrs,min,sec;

    // User to input time in seconds
    printf("Enter time in seconds: ");
    scanf("%d",&s);

    // Compute Hours
    hrs=s/3600;

    // Compute Minutes
    s=s%3600;
    min=s/60;

    // Compute Seconds
    sec=s%60;

    printf("TIME: \n%02d:%02d:%02d \n ",hrs,min,sec);
    return 0;
}