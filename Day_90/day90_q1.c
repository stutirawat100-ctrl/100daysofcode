/* Q140 Define a struct with enum Gender and print person's gender.*/

#include <stdio.h>

// Define enum for gender
enum Gender 
{
    MALE,
    FEMALE,
    OTHER
};

// Define struct with enum member
struct Person 
{
    char name[50];
    enum Gender gender;
};

int main() 
{
    struct Person p;

    // Example: assign gender directly
    p.gender = MALE;

    // Print gender based on enum value
    switch(p.gender) 
    {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
    }

    return 0;
}
