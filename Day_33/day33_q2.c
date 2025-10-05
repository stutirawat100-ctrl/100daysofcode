//Insert an element in a sorted array at the appropriate position.

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

    printf("Enter the element to insert: ");
    scanf("%d", &num);

    // Find position to insert
    for(pos = 0; pos < n; pos++) 
    {
        if(num < arr[pos])
            break;
    }

    // Shift elements to the right
    for(i = n; i > pos; i--)
        arr[i] = arr[i - 1];

    arr[pos] = num;
    n++;

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}                                       // END of program