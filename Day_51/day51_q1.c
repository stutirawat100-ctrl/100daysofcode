/* Q101 Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. 
The elements in the sorted array might be repeated. You need to print the first and last occurrence 
of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present. */

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

    int c=0, f, l;
    int target;
    printf("Enter an element to be searched: ");
    scanf("%d",&target);

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

    for(int i=0; i<n; i++)
    {
        if(num[i]==target)
        {
            c++;
            if(c==1)
                f=i;
        }
    }
    
    int cc=0;
    for(int i=0; i<n;i++)
    {
        if(num[i]==target)
        {
            cc++;
            if(cc==c)
                l=i;
        }
    }

    if(c==0)
        printf("-1");
    else
        printf("First occurrence of %d at index: %d",target,f);

    if(cc==0)
        printf("-1");
    else
        printf(" \nLast occurrence of %d at index: %d",target,l);

    return 0;
}
