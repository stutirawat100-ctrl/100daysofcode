/* Q136 Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.*/

#include <stdio.h>
#include <string.h>

enum Menu 
{
    ADD,
    SUBTRACT,
    MULTIPLY
};

int main() 
{
    char choice[20];
    int a, b;
    enum Menu operation;

    // Input format: <CHOICE> <num1> <num2>
    printf("Enter operation and two numbers (ADD/SUBTRACT/MULTIPLY): ");
    scanf("%s %d %d", choice, &a, &b);

    // Map string to enum
    if (strcmp(choice, "ADD") == 0) 
    {
        operation = ADD;
    } 
    else if (strcmp(choice, "SUBTRACT") == 0) 
    {
        operation = SUBTRACT;
    } 
    else if (strcmp(choice, "MULTIPLY") == 0) 
    {
        operation = MULTIPLY;
    } 
    else 
    {
        printf("Invalid choice!\n");
        return 1;
    }

    // Perform operation using switch
    switch(operation) 
    {
        case ADD:
            printf("%d\n", a + b);
            break;
        case SUBTRACT:
            printf("%d\n", a - b);
            break;
        case MULTIPLY:
            printf("%d\n", a * b);
            break;
    }

    return 0;
}
