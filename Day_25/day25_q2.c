/* Q50 Write a program to print the following pattern:
*****
 ****
  ***
   **
    *                                                   */

#include <stdio.h>
int main()
{
    int sp=0;
    
    // Nested loop to print pattern
    for(int i=5;i>=1;i--)
    {

        for(int k=1;k<=sp;k++)
        {
            printf(" ");
        }

        for(int j=1;j<=i;j++)
        {
            printf("*");
        }

        printf("\n");
        sp++;
    }

    return 0;
}                                               // END of program