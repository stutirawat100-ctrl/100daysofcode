// Q88 Replace spaces with hyphens in a string.

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
        if(str[i]==32)
            str[i]='-';
    }

    printf("%s",str);
    return 0;
}