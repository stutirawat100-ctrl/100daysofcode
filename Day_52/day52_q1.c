/* Q102 Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) 
of the smallest element in arr[] that is greater than or equal to x and print it. This element is called 
the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil
of x, return the index of the first occurrence.*/

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a no. ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter Sorted array elements: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int x;
    printf("Enter an integer: ");
    scanf("%d",&x);

    int c=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==x)
        {
            printf("%d",i);
            c=1;
            break;
        }

        if(arr[i]>x)
        {
            printf("%d",i);
            c=1;
            break;
        }
    }

    if(c==0)
        printf("-1");

    return 0;
}
