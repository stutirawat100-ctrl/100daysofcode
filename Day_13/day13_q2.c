//Q26 Write a program to print numbers from 1 to n.

#include <stdio.h>
int main() 
{
    int n, i;                   // Declaration

    // Input a number
    printf("Enter a number (n): ");
    scanf("%d", &n);

    // Loop from 1 to n
    for (i = 1; i <= n; i++) 
    {
        printf("%d ", i);
    }

    return 0;
}                               // END of program