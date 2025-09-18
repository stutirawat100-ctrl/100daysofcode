// Q33 Write a program to check if a number is an Armstrong number.

#include <stdio.h>
#include <math.h>
int main() 
{
    int num,temp, sum = 0, count = 0;       // Declaration
    printf("Enter a number: ");
    scanf("%d",&num);

    temp = num;

    int temp2 = num;
    while (temp2 != 0)                     // To count no. of digits
    {
       count++;
       temp2 /= 10;
    }

    while(num != 0)                        // To check if the no. is Armstrong no. or not
    {
       int digit = num % 10;
       sum +=  pow((digit),count);
       num = num / 10;
    }
    
    if (temp == sum)                       // Display the message 
    { 
        printf("%d is an Armstrong Number. \n ",temp);
    }

    else
    {
        printf("%d is not an Armstrong Number. \n ",temp);
    }

    return 0;
}                                       // END of program 


