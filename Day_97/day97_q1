/* Store employee data in a binary file using fwrite() and read using fread().*/

#include <stdio.h>

// Define Employee structure
struct Employee 
{
    char name[50];
    int id;
    float salary;
};

int main() 
{
    struct Employee e1, e2;
    FILE *fp;

    // Input employee details
    printf("Enter Employee Name: ");
    scanf("%s", e1.name);

    printf("Enter Employee ID: ");
    scanf("%d", &e1.id);

    printf("Enter Employee Salary: ");
    scanf("%f", &e1.salary);

    // Open file in write-binary mode
    fp = fopen("employee.dat", "wb");
    if(fp == NULL) 
    {
        printf("Error opening file!\n");
        return 1;
    }

    // Write structure to file
    fwrite(&e1, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // Open file in read-binary mode
    fp = fopen("employee.dat", "rb");
    if(fp == NULL) 
    {
        printf("Error opening file!\n");
        return 1;
    }

    // Read structure from file
    fread(&e2, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // Display employee details read from file
    printf("\nEmployee Details (Read from File):\n");
    return 0;
}
