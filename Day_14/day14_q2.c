//Q28 Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>
int main() 
{
    int n, i;                   // Declaration
    int product = 1;

    // Input a number
    printf("Enter a no. ");
    scanf("%d", &n);

    // Calculate product
    for (i = 2; i <= n; i += 2) 
    {
        product *= i;
    }

    printf("%d ( ",product);

    for (i = 2; i <= n; i += 2) 
    {
        printf("%d", i);
        if (i + 2 <= n) 
        {
            printf(" * ");
        }
    }

    printf(" )\n ");

    return 0;
}                               // END of program