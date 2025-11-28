/* Q148 Take two structs as input and check if they are identical.*/

#include <stdio.h>
#include <string.h>

// Define Student structure
struct Student 
{
    char name[50];
    int roll_no;
    int marks;
};

// Function to compare two students
int compareStudents(struct Student s1, struct Student s2) 
{
    if(strcmp(s1.name, s2.name) == 0 && 
       s1.roll_no == s2.roll_no && 
       s1.marks == s2.marks) 
    {
        return 1;  // Same
    }
    return 0;      // Different
}

int main() 
{
    struct Student s1, s2;

    // Input details of Student 1
    printf("Enter details of Student 1\n");
    printf("Name: ");
    scanf("%s", s1.name);
    printf("Roll: ");
    scanf("%d", &s1.roll_no);
    printf("Marks: ");
    scanf("%d", &s1.marks);

    // Input details of Student 2
    printf("\nEnter details of Student 2\n");
    printf("Name: ");
    scanf("%s", s2.name);
    printf("Roll: ");
    scanf("%d", &s2.roll_no);
    printf("Marks: ");
    scanf("%d", &s2.marks);

    // Compare and print result
    if(compareStudents(s1, s2)) 
    {
        printf("\nSame\n");
    } 
    else 
    {
        printf("\nDifferent\n");
    }

    return 0;
}
