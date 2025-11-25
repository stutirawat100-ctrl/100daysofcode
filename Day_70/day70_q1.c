/* Q120 Write a program to take a string input. Change it to sentence case.     */

#include <stdio.h>
#include <ctype.h>   // for toupper() and tolower()

int main() 
{
    char str[200];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // read full line including spaces

    // Convert first character to uppercase if it's a letter
    if (str[0] != '\0') 
    {
        str[0] = toupper(str[0]);
    }

    // Convert rest of the characters to lowercase
    for (int i = 1; str[i] != '\0'; i++) 
    {
        str[i] = tolower(str[i]);
    }

    printf("Sentence case: %s\n", str);
    return 0;
}
