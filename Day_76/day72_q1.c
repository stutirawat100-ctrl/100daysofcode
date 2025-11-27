/* Q126 Ask the user for a filename. Check if it exists by trying to open it in read mode. If 
the file pointer is NULL, print an error message; otherwise, read and display its content. */

#include <stdio.h>

int main() 
{
    FILE *fp;              // File pointer
    char buffer[100];      // Buffer to store each line
    char file[100];  // To store the entred file name

    printf(" \nEnter a File name: ");
    scanf("%99s", file);

    // Open the file in read mode
    fp = fopen( file , "r");
    if (fp == NULL) 
    {
        printf("Error: File does not exist!\n");
        return 1; // Exit if file couldn't be opened
    }

    printf("\nFile opened successfully.\n");
    printf("\n========= File Content =========\n \n");
    // Read and print each line until EOF
    while (fgets(buffer, sizeof(buffer), fp) != NULL) 
    {
        printf("%s", buffer);  // Print line to console
    }

    // Close the file
    fclose(fp);

    printf("\n ");

    return 0;
}
