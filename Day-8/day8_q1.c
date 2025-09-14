/* Q15 Write a program to input a character and check whether it is an uppercase alphabet,
 lowercase alphabet, digit, or special character. */

 #include <stdio.h>
 int main()
 {
     char c;             // Declaration

    // User to input a character
    printf("Enter a Character: ");
    scanf("%c",&c);

    // Check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
    if((c>='A')&&(c<='Z'))
        printf("%c is an Uppercase alphabet. \n ",c);

    else if ((c>='a')&&(c<='z'))
        printf("%c is a Lowercase alphabet. \n ",c);

    else if((c>='0')&&(c<='9'))
        printf("%c is a Digit. \n ",c);

    else
        printf("%c is Special character. \n ",c);

    return 0;
 }                      // END of program
