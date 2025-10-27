// Q82 Print each character of a string on a new line.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];

    printf(" \nEnter a String: ");
    fgets(str,sizeof(str),stdin);

    printf("\n");
    int l=strlen(str);
    for(int i=0;i<l;i++)
    {
        printf("%c\n",str[i]);
    }

    return 0;
}