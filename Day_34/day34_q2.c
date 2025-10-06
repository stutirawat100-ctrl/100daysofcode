//Delete an element from an array.

#include <stdio.h>

int main() 
{
    int  n, i, num, pos;

    printf("Enter the size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d sorted elements:\n", n);
    for(i = 0; i < n; i++)
    scanf("%d", &arr[i]);

    printf("Enter the position to be deleted: ");
    scanf("%d", &pos);

    // Shift elements left
    for(i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];

    n--;  // Reduce size

    printf("Array after deletion:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}                            // END of program
