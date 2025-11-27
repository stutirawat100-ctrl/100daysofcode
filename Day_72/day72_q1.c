/* Q122 Write a C program that opens an existing file (e.g., info.txt) and reads its contents using 
fgets(). The program should print all the lines to the console until EOF (end of file) is reached.*/

#include <stdio.h>

int main() 
{
    FILE *fp;              // File pointer
    char buffer[100];      // Buffer to store each line

    // Open the file in read mode
    fp = fopen("content-plan.txt", "r");
    if (fp == NULL) 
    {
        printf("Error: Could not open file content-plan.txt\n");
        return 1; // Exit if file couldn't be opened
    }

    // Read and print each line until EOF
    while (fgets(buffer, sizeof(buffer), fp) != NULL) 
    {
        printf("%s", buffer);  // Print line to console
    }

    // Close the file
    fclose(fp);

    return 0;
}
