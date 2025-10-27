// Q81 Count characters in a string without using built-in length functions.

#include <stdio.h>
int main()
{
    char str[100];   // Declare a string with a maximum size of 100
    int count = 0;   // Variable to store character count

    // Ask user for input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read string including spaces

    // Loop through the string until null character '\0' is found
    while (str[count] != '\0') 
    {
        count++;
    }

    // Since fgets() stores newline '\n' before '\0', remove it from count if present
    if (str[count - 1] == '\n') 
    {
        count--;  // Exclude the newline character
    }

    // Display result
    printf("Number of characters in the string: %d\n", count);

    return 0;
}
