/* Q143 Find and print the student with the highest marks.*/

#include <stdio.h>

// Define structure Student
struct Student 
{
    char name[50];
    int roll_no;
    int marks;
};

int main() 
{
    struct Student s[3];   // Array of 3 students
    int i, topperIndex = 0;

    // Input details of 3 students
    for(i = 0; i < 3; i++) 
    {
        printf("Enter details of student %d\n", i+1);
        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll: ");
        scanf("%d", &s[i].roll_no);

        printf("Marks: ");
        scanf("%d", &s[i].marks);
    }

    // Find student with highest marks
    for(i = 1; i < 3; i++) 
    {
        if(s[i].marks > s[topperIndex].marks) 
        {
            topperIndex = i;
        }
    }

    // Print topper details
    printf("\nTopper: %s (Marks: %d)\n", s[topperIndex].name, s[topperIndex].marks);

    return 0;
}
