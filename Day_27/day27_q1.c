/* Q53 Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*                                                       */

#include <stdio.h>
int main()
{   
    int s;
    
    // Nested loop to print pattern
    for(int i=1;i<=9;i++)
    {
        if((i==1) || (i==9))
            s=1;
            
        else if ((i==2) || (i==8))
            s=3;

        else if((i==3) || (i==7))
            s=5;

        else if((i==4) || (i==6))
            s=7;

        else
            s=9;

        for(int j=1;j<=s;j++)
        {
            printf("*");
        }

        printf("\n");
        
    }

    return 0;
}                                               // END of program
