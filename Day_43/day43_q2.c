// Q86 Check if a string is a palindrome.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    int j=0;

    printf(" \nEnter a string: ");
    fgets(str,sizeof(str),stdin);

    int l=strlen(str);
    if (str[l - 1] == '\n') 
    {
        str[l - 1] = '\0';
        l--;
    }

    char rev[l];
    for(int i=(l-1); i>=0; i--)
    {
        rev[j++]=str[i];
    }
    rev[j] = '\0'; // Null-terminate the reversed string

    if(strcmp(str, rev) == 0)
        printf("It is Palindrome");
    else
        printf("It is not a Palindrome");
        
    return 0;
}