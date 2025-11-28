* Q150 Use pointer to struct to modify and display data using -> operator.*/

#include <stdio.h>

// Define Student structure
struct Student 
{
    char name[50];
    int roll_no;
    int marks;
};

int main() 
{
    struct Student s;              // Normal structure variable
    struct Student *ptr = &s;      // Pointer to structure

    // Modify values using pointer and -> operator
    printf("Enter Name: ");
    scanf("%s", ptr->name);

    printf("Enter Roll: ");
    scanf("%d", &ptr->roll_no);

    printf("Enter Marks: ");
    scanf("%d", &ptr->marks);

    // Display modified data using pointer
    printf("\nModified Data: Name: %s | Roll: %d | Marks: %d\n",
           ptr->name, ptr->roll_no, ptr->marks);

    return 0;
}
