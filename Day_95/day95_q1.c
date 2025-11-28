/* Q145 Return a structure containing top student's details from a function.*/

#include <stdio.h>

// Define structure Student
struct Student 
{
    char name[50];
    int roll_no;
    int marks;
};

// Function to find and return the top student
struct Student findTopper(struct Student s[], int n) 
{
    int i, topperIndex = 0;

    for(i = 1; i < n; i++) 
    {
        if(s[i].marks > s[topperIndex].marks) 
        {
            topperIndex = i;
        }
    }
    return s[topperIndex];  // Return the structure of the topper
}

int main() 
{
    struct Student s[3];
    int i;

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

    // Call function to get topper
    struct Student topper = findTopper(s, 3);

    // Print topper details
    printf("\nTop Student: %s | Roll: %d | Marks: %d\n", topper.name, topper.roll_no, topper.marks);

    return 0;
}
