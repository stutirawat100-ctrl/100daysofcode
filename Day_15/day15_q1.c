//Q29 Write a program to reverse a given number.

#include <stdio.h>
int main() 
{
    int num, rev = 0;               // Declaration

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // To reverse the number
    while (num != 0)
     {
        int digit = num % 10;         // Get last digit
        rev = rev * 10 + digit; 
        num = num / 10;               // Remove last digit
    }

    printf("Reversed number: %d\n", rev);

    return 0;
}                                   // END of program
