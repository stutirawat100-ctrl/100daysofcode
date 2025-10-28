// Q90 Toggle case of each character in a string.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[50], ch;
    int c=0;

    printf(" \nEnter a string: ");
    fgets(str,sizeof(str),stdin);

    int l=strlen(str);
    for(int i=0; i<l; i++)
    {
        ch=str[i];
        if(ch>=65 && ch<=90)
            str[i]=tolower(ch);

        else
            str[i]=toupper(ch);
    }

    printf("%s",str);
    return 0;
}