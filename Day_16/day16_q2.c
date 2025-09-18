// Q32 Write a program to check if a number is a palindrome.

 #include <stdio.h>
 int main()
 {
    int n, temp, rev=0,rem=1;                // Declaration

    // User to input a no.
    printf("Enter a no: ");
    scanf("%d",&n);

    // Check if the no. is palindrome or not
    temp=n;
    while(temp>0)
    {
        rem=temp % 10;
        rev=(rev*10) + rem;
        temp=temp / 10;
    }
    
    if (rev==n)
        printf("%d is a Palindrome Number. \n ",n);

    else
        printf("%d is not a Palindrome Numeber. \n ",n);

    return 0;
 }                                          // END of program