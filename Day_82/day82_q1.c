/* Q132 Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.*/

#include <stdio.h>
#include <string.h>

enum Traffic 
{
    RED,
    YELLOW,
    GREEN,
};

int main()
{
    enum Traffic lights;
    char l[6];

    printf("Enter a Traffic light colour: ");
    scanf("%s",&l);

    // Convert input string to enum
    if (strcmp(l, "RED") == 0) 
    {
        lights = RED;
    } 
    else if (strcmp(l, "YELLOW") == 0) 
    {
        lights = YELLOW;
    } 
    else if (strcmp(l, "GREEN") == 0) 
    {
        lights = GREEN;
    } 
    else 
    {
        printf("Invalid color entered!\n");
        return 1;                               // exit program
    }

    switch(lights)
    {
        case RED: 
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
    }
    return 0;
}
