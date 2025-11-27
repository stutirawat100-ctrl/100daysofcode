/* Q123 Read a text file and count the total number of characters, words, and lines. A 
word is defined as a sequence of non-space characters separated by spaces or newlines.*/

#include <stdio.h>
#include <ctype.h>   // for isspace()

int main() 
{
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;  // flag to track if we are inside a word

    // Open file in read mode
    fp = fopen("notes.txt", "r");
    if (fp == NULL) 
    {
        printf("Error: Could not open file notes.txt\n");
        return 1;
    }

    // Read file character by character`
    while ((ch = fgetc(fp)) != EOF) 
    {
        characters++;  // count every character

        if (ch == '\n') 
        {
            lines++;   // count line breaks
        }

        if (isspace(ch)) 
        {
            // If we hit a space/newline, we are no longer inside a word
            inWord = 0;
        } else 
        {
            // If not space, check if we are starting a new word
            if (inWord == 0) 
            {
                words++;
                inWord = 1;
            }
        }
    }

    fclose(fp);

    // Print results
    printf("Total characters: %d\n", characters);
    printf("Total words: %d\n", words);
    printf("Total lines: %d\n", lines);

    return 0;
}
