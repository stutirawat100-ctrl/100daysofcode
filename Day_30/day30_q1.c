// Q61 Count even and odd numbers in an array.

#include <stdio.h>

int main() 
{
    int arr[100], n;
    int even = 0, odd = 0;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);

        // Check if even or odd
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    // Output
    printf("Total even numbers = %d\n", even);
    printf("Total odd numbers  = %d\n", odd);

    return 0;
}                                               // END of program
