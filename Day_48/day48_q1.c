// Q95 Check if one string is a rotation of another.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str1[50], str2[50];
    printf(" \nEnter a String:  ");
    fgets(str1,sizeof(str1),stdin);

    printf(" \nEnter another string: ");
    fgets(str2,sizeof(str2),stdin);

    // Remove the newline character
    str1[strcspn(str1, "\n")]='\0';
    str2[strcspn(str2, "\n")]='\0';

    // If lengths differ, cannot be rotations
    if (strlen(str1) != strlen(str2))
    {
        printf("\nNot a rotation.\n");
        return 0;
    }

    // Create temp = str1 + str1
    char temp[100];
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 is inside temp
    if (strstr(temp, str2) != NULL)
        printf("\nYES, '%s' is a rotation of '%s'\n", str2, str1);
    else
        printf("\nNO, '%s' is NOT a rotation of '%s'\n", str2, str1);

    return 0;
}
