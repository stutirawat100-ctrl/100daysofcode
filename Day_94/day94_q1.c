/* Q144 Write a function that accepts a structure as parameter and prints its members.*/

#include <stdio.h>

// Define structure Student
struct Student 
{
    char name[50];
    int roll_no;
    int marks;
};

// Function that accepts structure and prints its members
void printStudent(struct Student s) 
{
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll_no, s.marks);
}

int main() 
{
    struct Student s1;

    // Input student details
    printf("Enter Name: ");
    scanf("%s", s1.name);

    printf("Enter Roll: ");
    scanf("%d", &s1.roll_no);

    printf("Enter Marks: ");
    scanf("%d", &s1.marks);

    // Call function to print student details
    printStudent(s1);

    return 0;
}
