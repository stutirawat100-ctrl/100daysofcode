// Q84 Convert a lowercase string to uppercase without using built-in functions.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];

    printf(" \nEnter a string: ");
    fgets(str,sizeof(str),stdin);

    int l=strlen(str);
    for(int i=0; i<l; i++)
    {
        char ch=str[i];
        if((ch>=97)&&(ch<=122))
        {
            ch-=32;
        }
        str[i]=ch;
    }

    printf("\n%s",str);
    return 0;
}