// Q14 Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include <stdio.h>
int main()
{
    char c;             // Declaration

    // User to input a character
    printf("Enter a Character: ");
    scanf("%c",&c);

    // Check whether it is a vowel or a consonant
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
        printf("%c is a vowel. \n ",c);
    else
        printf("%c is a consonant. \n ",c);
    
    return 0;
}                           // END of program