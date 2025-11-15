// Q100 Print all sub-strings of a string.

#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);   // read string without spaces

    int n = strlen(str);

    printf("All substrings of \"%s\":\n", str);

    // Generate substrings
    for (int i = 0; i < n; i++) 
    {
        for (int j = i; j < n; j++) 
        {
            // Print substring from i to j
            for (int k = i; k <= j; k++) 
            {
                printf("%c", str[k]);
            }
            printf(", ");
        }
    }

    return 0;
}