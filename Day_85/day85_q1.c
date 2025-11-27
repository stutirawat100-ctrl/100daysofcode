/* Q135 Assign explicit values starting from 10 and print them.*/

#include <stdio.h>

enum Example 
{
    A = 10,   // explicitly assigned
    B,        // auto-increments to 11
    C         // auto-increments to 12
};

int main() 
{
    printf("A=%d\n", A);
    printf("B=%d\n", B);
    printf("C=%d\n", C);

    return 0;
}
