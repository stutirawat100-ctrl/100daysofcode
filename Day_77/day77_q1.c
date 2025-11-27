/* Q127 Write a program that reads text from input.txt, converts all lowercase 
letters to uppercase, and writes the result to output.txt.                  */

#include <stdio.h>
#include <ctype.h>   // for toupper()

int main() 
{
    FILE *inFile, *outFile;
    char ch;
    char ifile[100], ufile[100];  // To store the entred file name

    printf(" \nEnter a File name: ");
    scanf("%99s", ifile);

    // Open input file in read mode
    inFile = fopen(ifile, "r");
    if (inFile == NULL) 
    {
        printf("Error: File does not exist!\n");
        return 1;
    }

    // Open output file in write mode
    outFile = fopen(ufile, "w");
    if (outFile == NULL) 
    {
        printf("Error: Could not open output.txt\n");
        fclose(inFile);
        return 1;
    }

    // Read each character, convert to uppercase, and write to output file
    while ((ch = fgetc(inFile)) != EOF) 
    {
        fputc(toupper(ch), outFile);
    }

    // Close both files
    fclose(inFile);
    fclose(outFile);

    printf("Conversion complete. Output written to output.txt\n");

    return 0;
}
