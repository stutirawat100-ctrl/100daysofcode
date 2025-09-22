// Read and print elements of a one-dimensional array.

#include <stdio.h>

int main() 
{
    int arr[50];  // Declare array with max size 100
    int n;

    // Input the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    // Print array elements
    printf("Array elements are:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
