/* Q51 Write a program to print the following pattern:
    5
   45
  345
 2345
12345                                                   */

#include <stdio.h>
int main()
{
    int sp=4;
    
    // Nested loop to print pattern
    for(int i=5;i>=1;i--)
    {

        for(int k=1;k<=sp;k++)
        {
            printf(" ");
        }

        for(int j=i;j<=5;j++)
        {
            printf("%d",j);
        }

        printf("\n");
        sp--;
    }

    return 0;
}                                               // END of program
