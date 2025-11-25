/* Q115 Write a program to take two strings s and t as inputs (assume all characters are lowercase). 
The task is to determine if s and t are valid anagrams, meaning they contain the same characters 
with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".                  */

#include <stdio.h>
#include <string.h>

int main() 
{
    char s[100], t[100];
    int freqS[26] = {0}, freqT[26] = {0};  // frequency arrays for lowercase letters

    printf("Enter first string: ");
    scanf("%s", s);
    printf("Enter second string: ");
    scanf("%s", t);

    // If lengths differ, they can't be anagrams
    if (strlen(s) != strlen(t)) 
    {
        printf("Not Anagram\n");
        return 0;
    }

    // Count frequencies
    for (int i = 0; s[i] != '\0'; i++) 
    {
        freqS[s[i] - 'a']++;
        freqT[t[i] - 'a']++;
    }

    // Compare frequencies
    for (int i = 0; i < 26; i++) 
    {
        if (freqS[i] != freqT[i]) 
        {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}
