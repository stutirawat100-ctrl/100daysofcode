// Q41 Write a program to swap the first and last digit of a number.

#include <stdio.h>
int main()
{
    int n, temp, temp2, a=0, p=0, rem,f,l;                          // Declaration

    // User to input a no.
    printf("Enter a number: ");
    scanf("%d",&n);

    // To find the first and last digit of a number.
    temp=n;
    while(n>0)
    {
        rem=n%10;
        if(temp==n)
        {
            f=rem;
        }
        a=a*10+rem;
        n=n/10;
        if(n==0)
        {
            l=rem;
        }
    }
    // Swap the first and last digit of a number.
    temp2=a;
    rem=0;
    while(a>0)
    {
        rem=a%10;
        if(temp2==a)
        {
            p=p*10+f;
        }
        else if(a==f) 
        {
            p=p*10+l;
        }  
        else 
        {
            p=p*10+rem;
        }
        a=a/10;
       
    }
    printf("%d",p);
    return 0;
}                                            // END of program
