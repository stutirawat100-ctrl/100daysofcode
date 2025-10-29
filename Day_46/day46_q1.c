// Q91 Remove all vowels from a string.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[50], s[50];
    int j=0;

    printf(" \nEnter a string: ");
    fgets(str,sizeof(str),stdin);

    int l=strlen(str);
    for(int i=0; i<l; i++)
    {

        if(str[i]!='A'&&str[i]!='E'&&str[i]!='I'&&str[i]!='O'&&str[i]!='U'&&str[i]!='a'&&str[i]!='e'&&str[i]!='o'&&str[i]!='u'&&str[i]!='i')
        {
            s[j++]=str[i];
        }
    }

    s[j]='\0';
    printf("%s",s);
    return 0;
}
