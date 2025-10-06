//Find the second largest element in an array.

#include <stdio.h>

int main() 
{
    int n, i, j, temp;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Simple Bubble Sort
    for(i = 0; i < n - 1; i++) 
    {
        for(j = 0; j < n - i - 1; j++) 
        {
            if(arr[j] > arr[j + 1]) 
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Find second largest by scanning from end
    for(i = n - 2; i >= 0; i--) 
    {
        if(arr[i] != arr[n - 1]) 
        {
            printf("Second largest element is: %d\n", arr[i]);
            break;
        }
    }

    return 0;
}                        // END of program
