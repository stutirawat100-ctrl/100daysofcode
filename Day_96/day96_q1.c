/* Q146 Create Employee structure with nested Date structure for joining date and print details.*/

#include <stdio.h>

// Define Date structure
struct Date 
{
    int day;
    int month;
    int year;
};

// Define Employee structure with nested Date
struct Employee 
{
    char name[50];
    int id;
    struct Date joining_date;  // Nested structure
};

int main() 
{
    struct Employee e;

    // Input employee details
    printf("Enter Name: ");
    scanf("%s", e.name);

    printf("Enter ID: ");
    scanf("%d", &e.id);

    printf("Enter Joining Date (dd mm yyyy): ");
    scanf("%d %d %d", &e.joining_date.day, &e.joining_date.month, &e.joining_date.year);

    // Print employee details
    printf("\nName: %s | ID: %d | Joining Date: %02d/%02d/%d\n",
           e.name, e.id, e.joining_date.day, e.joining_date.month, e.joining_date.year);

    return 0;
}
