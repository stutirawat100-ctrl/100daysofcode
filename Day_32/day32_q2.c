// Q64 Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main() 
{
    int num, digit;
    int freq[10] = {0};             // Frequency array for digits 0–9
    int maxFreq = 0, mostFreqDigit = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Handle negative numbers
    if(num < 0)
        num = -num;

    // Count frequency of each digit
    while(num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    // Find the digit with highest frequency (smallest if tie)
    for(int i = 0; i < 10; i++) 
    {
        if(freq[i] > maxFreq) 
        {
            maxFreq = freq[i];
            mostFreqDigit = i;
        }
    }

    printf("Most frequent digit is: %d\n", mostFreqDigit);
    return 0;
}                                           // END of program