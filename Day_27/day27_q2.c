/* Q54 Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *                                                    */

#include <stdio.h>
int main()
{   
    int s, sp;
    
    // Nested loop to print pattern
    for(int i=1;i<=7;i++)
    {
        if((i==1) || (i==7))
        {
            s=1;
            sp=3;
        }
           
        else if ((i==2) || (i==6))
        {
            s=3;
            sp=2;
        }

        else if((i==3) || (i==5))
        {
            s=5;
            sp=1;
        }

        else
        {
            s=7;
            sp=0;
        }
        
        for(int k=sp;k>=1;k--)
        {
            printf(" ");
        }

        for(int j=1;j<=s;j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}                                               // END of program