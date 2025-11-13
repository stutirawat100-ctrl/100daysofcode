// Q94 Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100];
    char longest[100] = "";
    char current[100];
    int i = 0, j = 0, max = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline at the end if present
    str[strcspn(str, "\n")] = '\0';

    while (1) 
    {
        if (str[i] != ' ' && str[i] != '\0') 
        {
            current[j++] = str[i];
        } 
        else 
        {
            current[j] = '\0'; // terminate current word
            if (j > max) 
            {
                max = j;
                strcpy(longest, current);
            }
            j = 0; // reset for next word
        }

        if (str[i] == '\0')
            break;
        i++;
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", max);

    return 0;
}
