// Q61 Search for an element in an array using linear search.

#include <stdio.h>

int main() 
{
    int arr[100], n, key, found = 0;

    // Input number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    // Input element to search
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Linear search
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == key) 
        {
            printf("Element %d found at position %d (index %d)\n", key, i + 1, i);
            found = 1;
            break;
        }
    }

    if (!found) 
    {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}                                                           // END of program
