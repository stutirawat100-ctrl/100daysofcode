#include <stdio.h>
#include <ctype.h>   // for isalpha(), tolower()

int main() {
    FILE *fp;
    char ch;
    int vowels = 0, consonants = 0;

    // Open file in read mode
    fp = fopen("input.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open input.txt\n");
        return 1;
    }

    // Read character by character
    while ((ch = fgetc(fp)) != EOF) {
        if (isalpha(ch)) {  // Only process alphabetic characters
            ch = tolower(ch);  // Convert to lowercase for uniformity

            // Check if vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
        // Digits and special characters are ignored
    }

    fclose(fp);

    // Print results
    printf("Total vowels: %d\n", vowels);
    printf("Total consonants: %d\n", consonants);

    return 0;
}
