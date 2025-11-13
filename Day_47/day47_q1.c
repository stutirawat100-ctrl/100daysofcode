// Q95 Check if two strings are anagrams of each other.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 256  // Number of possible ASCII characters

int anagram(char str1[], char str2[]);

int main() 
{
    char str1[50], str2[50];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters from fgets
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    if (anagram(str1, str2))
        printf("Anagrams\n");
    else
        printf("Not Anagrams\n");

    return 0;
}

int anagram(char str1[], char str2[])
{
    int count[MAX] = {0};

    // If lengths differ, not anagrams
    if (strlen(str1) != strlen(str2))
        return 0;

    for (int i = 0; str1[i] && str2[i]; i++) 
    {
        count[tolower((unsigned char)str1[i])]++;
        count[tolower((unsigned char)str2[i])]--;
    }

    for (int i = 0; i < MAX; i++) 
    {
        if (count[i] != 0)
            return 0;
    }

    return 1;
}
