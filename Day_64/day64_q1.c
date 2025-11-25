/* Q114 Write a program to take a string s as input. The task is to find the length of the longest 
substring without repeating characters. Print the length as output.                             */

#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char *s) 
{
    int n = strlen(s);
    int lastIndex[256];   // stores last index of each character
    for (int i = 0; i < 256; i++) 
    {
        lastIndex[i] = -1;  // initialize with -1
    }

    int maxLen = 0;
    int start = 0;  // start of sliding window

    for (int end = 0; end < n; end++) 
    {
        char c = s[end];

        // If character was seen before, move start
        if (lastIndex[(unsigned char)c] >= start) 
        {
            start = lastIndex[(unsigned char)c] + 1;
        }

        // Update last seen index of current character
        lastIndex[(unsigned char)c] = end;

        // Update max length
        int windowLen = end - start + 1;
        if (windowLen > maxLen) 
        {
            maxLen = windowLen;
        }
    }

    return maxLen;
}

int main() 
{
    char s[100];
    printf("Enter a string: ");
    scanf("%s", s);

    int result = lengthOfLongestSubstring(s);
    printf("Length of longest substring without repeating characters: %d\n", result);

    return 0;
}
