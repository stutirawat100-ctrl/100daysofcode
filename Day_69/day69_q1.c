/* Q119 Write a program to take an integer array as input. Only one element will be repeated. 
Print the repeated element. Try to find the result in one single iteration.                */

#include <stdio.h>

int main() 
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    // Frequency array (assuming elements are in range 0..n)
    int seen[n+1];
    for (int i = 0; i <= n; i++) 
    {
        seen[i] = 0;
    }

    // Single iteration to find duplicate
    for (int i = 0; i < n; i++) 
    {
        if (seen[arr[i]] == 1) 
        {
            printf("Repeated element: %d\n", arr[i]);
            return 0;  // stop immediately once found
        }
        seen[arr[i]] = 1;
    }

    // If no duplicate found (though problem guarantees one)
    printf("No duplicate found\n");
    return 0;
}
