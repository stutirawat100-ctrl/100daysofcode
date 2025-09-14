// Q13 Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include <stdio.h>
int main()
{
    int y,yrs;              // Declaration

    // User to input a Year
    printf("Enter a year: ");
    scanf("%d",&y);

    // Check if it is a leap year or not
    if(y%4==0)
    {
        yrs=y%100;
        if(yrs==0)
        {
            if(y%400==0)
            {
                printf("%d is a leap year. \n ",y);
            }
            else
            {    
                printf("%d is not a Leap Year. \n ",y);
            }
        }
        else
            printf("%d is a leap year. \n ",y);
    }
    else
        printf("%d is not a Leap Year. \n ",y);

    return 0;
}                           // End of program
