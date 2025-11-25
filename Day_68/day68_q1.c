/* Q118 Write a program to take an input array of size n. The array should contain all the integers 
between 0 to n except for one. Print that missing number                                         */

#include <stdio.h>

int main() 
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (between 0 and %d, missing one): ", n, n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    // Calculate expected sum of numbers from 0 to n
    int expectedSum = n * (n + 1) / 2;

    // Calculate actual sum of array elements
    int actualSum = 0;
    for (int i = 0; i < n; i++) 
    {
        actualSum += arr[i];
    }

    // Missing number
    int missing = expectedSum - actualSum;
    printf("Missing number: %d\n", missing);

    return 0;
}
