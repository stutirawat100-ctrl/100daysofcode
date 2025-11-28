/* Q149 Use malloc() to allocate structure memory dynamically and print details.*/

#include <stdio.h>
#include <stdlib.h>   // for malloc()

// Define Student structure
struct Student 
{
    char name[50];
    int roll_no;
    int marks;
};

int main() 
{
    // Dynamically allocate memory for one Student
    struct Student *s = (struct Student *)malloc(sizeof(struct Student));

    if(s == NULL) 
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input student details
    printf("Enter Name: ");
    scanf("%s", s->name);

    printf("Enter Roll: ");
    scanf("%d", &s->roll_no);

    printf("Enter Marks: ");
    scanf("%d", &s->marks);

    // Print student details
    printf("\nName: %s | Roll: %d | Marks: %d\n", s->name, s->roll_no, s->marks);

    // Free allocated memory
    free(s);

    return 0;
}
