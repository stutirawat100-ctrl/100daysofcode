// Q96 Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int j=0;

    printf(" \nEnter a string: ");
    fgets(str,sizeof(str),stdin);

    int l=strlen(str);
    if (str[l - 1] == '\n') 
    {
        str[l - 1] = '\0';
        l--;
    }

    for(int k=0; k<l; k++)
    {
        if(k=32)
        {
            char wrd = str[k];
            char rev[l];
            for(int i=(l-1); i>=0; i--)
            {
                rev[j++]=str[i];
            }
            rev[j] = '\0'; // Null-terminate the reversed string

            printf("%s",rev);
            return 0;
        }

    }
}