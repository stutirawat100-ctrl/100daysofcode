/* Q52 Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*                                                              */

#include <stdio.h>
int main()
{   
    int s;
    
    // Nested loop to print pattern
    for(int i=1;i<=5;i++)
    {
        if((i==1) || (i==5))
            s=1;
            
        else if ((i==2) || (i==4))
            s=3;

        else
            s=5;

        for(int j=1;j<=s;j++)
        {
            printf("*\n");
        }

        printf("\n");
        
    }

    return 0;
}                                               // END of program