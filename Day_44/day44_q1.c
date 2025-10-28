// Q87 Count spaces, digits, and special characters in a string.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    int s=0, d=0, c=0;

    printf(" \nEnter a string: ");
    fgets(str,sizeof(str),stdin);

    int l=strlen(str);
    for(int i=0; i<l; i++)
    {
        char ch=str[i];
        if(ch==32)
            s++;

        else if((ch>=48) && (ch<=57))
            d++;

        else if(((ch>=65) && (ch<=90)) || ((ch>=97) && (ch<=122)))
        {}

        else if (ch != '\n' && ch != '\0') 
            c++;
    }
    printf("Spaces = %d\nDigits = %d\nSpecial Characters = %d",s,d,c);
    return 0;
}
