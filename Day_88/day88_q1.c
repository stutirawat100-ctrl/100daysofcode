/* Q138 Print all enum names and integer values using a loop.*/

#include <stdio.h>

enum Colors 
{
    RED,
    YELLOW,
    GREEN
};

int main() 
{
    // Array of names corresponding to enum values
    const char *colorNames[] = {"RED", "YELLOW", "GREEN"};

    // Loop through all enum values
    for (int i = RED; i <= GREEN; i++) 
    {
        printf("%s=%d\n", colorNames[i], i);
    }

    return 0;
}
