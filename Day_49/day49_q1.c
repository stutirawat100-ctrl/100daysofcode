// Q97 Print the initials of a name.

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
    int l=strlen(str1);
    for(int i=0; i<l; i++)
    {
        if(i==0)
        {
            str2[j++]=toupper(str1[i]);
            str2[j++]='.';
        }

        if(str1[i]==' ')
        {
            str2[j++]=toupper(str1[i+1]);
            str2[j++]='.';
        }
    }
    str2[j]='\0';
    printf("\n%s\n ", str2);
    return 0;
}
