// Q89 Count frequency of a given character in a string.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[50], ch;
    int c=0;

    printf(" \nEnter a string: ");
    fgets(str,sizeof(str),stdin);

    int l=strlen(str);

    printf("Enter a character o check its frequency: ");
    scanf("%c",&ch);

    for(int i=0; i<l; i++)
    {
        if(str[i]==ch || str[i]==(ch+32) || str[i]==(ch-32))
            c++;
    }

    printf("Frequency of %c = %d",ch,c);
    return 0;
}
