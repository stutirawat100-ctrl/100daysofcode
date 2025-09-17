//Q24 Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>
int main() 
{
    int a, b;               // Declaration
    char op;

    // Input numbers and operator
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);  

    // Switch-case for operations
    switch(op) 
    {
        case '+':
         printf("Result = %d\n", a + b); 
         break;
        case '-': 
        printf("Result = %d\n", a - b); 
        break;
        case '*':
         printf("Result = %d\n", a * b); 
         break;
        case '/': 
            if (b != 0) 
            printf("Result = %d\n", a / b);
            else
             printf("Cannot divide by zero\n");
            break;
        case '%': 
            if (b != 0) 
            printf("Result = %d\n", a % b);
            else 
            printf("Cannot modulo by zero\n");
            break;
        default:
         printf("Invalid operator\n");
    }

    return 0;
}                               // END of program
