/* Q124 Take two filenames from the user – a source file and a destination file. Copy 
all the content from the source file to the destination file using fgetc() and fputc().*/

#include <stdio.h>

int main() 
{
    FILE *src, *dest;
    char sourceFile[100], destFile[100];
    int ch;

    // Take filenames from user
    printf("Enter source filename: ");
    scanf("%99s", sourceFile);

    printf("Enter destination filename: ");
    scanf("%99s", destFile);

    // Open source file in read mode
    src = fopen(sourceFile, "r");
    if (src == NULL) 
    {
        printf("Error: Could not open source file %s\n", sourceFile);
        return 1;
    }

    // Open destination file in write mode
    dest = fopen(destFile, "w");
    if (dest == NULL) 
    {
        printf("Error: Could not open destination file %s\n", destFile);
        fclose(src); // Close source before exiting
        return 1;
    }

    // Copy contents character by character
    while ((ch = fgetc(src)) != EOF) 
    {
        fputc(ch, dest);
    }

    // Close both files
    fclose(src);
    fclose(dest);

    printf("File copied successfully from %s to %s\n", sourceFile, destFile);

    return 0;
}
