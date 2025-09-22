// Q62 Reverse an array without taking extra space.

#include <stdio.h>

int main() 
{
    int arr[100], n;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    // Reverse the array in-place
    for (int i = n-1; i >= 0; i--) 
    {
        printf("%d ",arr[i]);
    }

    return 0;
}                                                   // END of program