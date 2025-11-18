/* Q102 Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) 
of the smallest element in arr[] that is greater than or equal to x and print it. This element is called
the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil 
of x, return the index of the first occurrence.                                                        */

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of an array: ");
    scanf("%d",&n);

    int num[n];
    printf("Enter %d array elements: \n",n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }

    int c;
    int x;
    printf("Enter an element to be searched: ");
    scanf("%d",&x);

    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(num[j]>=num[j+1])
            {
                int temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }
    }
    
    if(num[n-1]<x)
    {
        printf("-1");
    }

    for(int i=0; i<n; i++)
    {
        if(num[i]==x)
        {
            printf("%d",i);
            break;
        }


    }

    for(int j=0; j<n; j++)
    {
        if((num[j]<x) && (num[j+1]<x))
        {
            c=j+1;
            printf("%d",num[c]);
            break;
        }
    }

    return 0;
}
