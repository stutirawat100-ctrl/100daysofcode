// Q98 Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str1[50], str2[4];
    printf(" \nEnter your full name:  ");
    fgets(str1,sizeof(str1),stdin);

    // Remove the newline character
    str1[strcspn(str1, "\n")]='\0';

    // to find the initials of a name
    int j=0;
    char *ls = strrchr(str1, ' ');
    int last_index = ls - str1;      // convert pointer to index
    int l=strlen(str1);
    for(int i=0; i<last_index; i++)
    {
        if(i==0)
        {
            str2[j++]=toupper(str1[i]);
            str2[j++]='.';
        }

        if(str1[i] == ' ')
        {
            str2[j++]=toupper(str1[i+1]);
            str2[j++]='.';
            str2[j++]=' ';
        }
    }

    for(int k=last_index + 1; k<l; k++)
    {
        str2[j++]=str1[k];
    }

    str2[j]='\0';
    printf("\n%s\n ", str2);
    return 0;
}