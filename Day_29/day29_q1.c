// Q59 Find the sum of array elements.

#include <stdio.h>

int main() 
{
    int arr[100], n, sum = 0;               // Declaration

    // Input number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];  // Add to sum directly
    }

    // Output the sum
    printf("Sum of array elements = %d\n", sum);

    return 0;
}                                       // END of program
