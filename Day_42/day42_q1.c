// Q83 Count vowels and consonants in a string.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    int c=0, s=0;               // Counter variables

    printf(" \nEnter a string: ");
    fgets(str,sizeof(str),stdin);

    int l=strlen(str);
    for(int i=0; i<l; i++)
    {
        // Ignore newline, spaces, digits, and symbols
        if (str[i] == '\n' || str[i] == ' ' || str[i] == '\t' || (str[i] < 'A') || 
           (str[i] > 'Z' && str[i] < 'a') || (str[i] > 'z'))
            continue;

        if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='o'||str[i]=='u'||str[i]=='i')
        {
            s++;
        }

        else
            c++;
    }

    printf("\nVowels = %d , Consonants = %d",s,c);
    return 0;
}
