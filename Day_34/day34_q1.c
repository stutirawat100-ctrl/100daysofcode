//Insert an element in an array at a given position.

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

    printf("Enter the position: ");
    scanf("%d", &pos);

    printf("Enter the element to insert: ");
    scanf("%d", &num);

    for(i = n; i > pos; i--)
        arr[i] = arr[i - 1];

    arr[pos] = num;
    n++;

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}                            // END of program
