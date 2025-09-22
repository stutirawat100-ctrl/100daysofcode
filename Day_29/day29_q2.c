// Q60 Find the maximum and minimum element in an array.

#include <stdio.h>

int main() 
{
    int arr[100], n;
    int max, min;

    // Input number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    // Initialize max and min with the first element
    max = min = arr[0];

    // Traverse the array to find max and min
    for (int i = 1; i < n; i++) 
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    // Output
    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}                                               // END of program
