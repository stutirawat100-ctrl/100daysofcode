/* Q103 Write a Program to take an array of integers as input, calculate the pivot index of this array. 
The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal 
to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, 
then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the 
array. Print the leftmost pivot index. If no such index exists, print -1.*/

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a no. ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter array elements: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int rs=0, ls=0, p=-1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(j<i)
            {
                rs+=arr[j];
            }

            else if(j>i)
            {
                ls+=arr[j];
            }

            else
            {

            }
        }
        if(rs==ls)
            p=i;

        rs=0;
        ls=0;
    }
    if(p==-1)
    {
        printf("Pivot Index: %d",p);
    }
    else
    {
        printf("Pivot Index: %d",p);
    }

    return 0;
}
