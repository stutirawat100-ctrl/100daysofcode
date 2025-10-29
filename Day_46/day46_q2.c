// Q92 Find the first repeating lowercase alphabet in a string.

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

        if(str[i]>=97 && str[i]<=122)
        {
            if(str[i]==str[i+1])
            {
                printf("%c",str[i]);
                break;
            }
        }
    }
    return 0;
}