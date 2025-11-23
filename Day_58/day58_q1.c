/* Q108 Write a Program to take an integer array nums. Print an array answer such that answer[i] 
is equal to the product of all the elements of nums except nums[i]. The product of any prefix or 
suffix of nums is guaranteed to fit in a 32-bit integer.                                      */

#include <stdio.h>

int main() 
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n], answer[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &nums[i]);
    }

    int pro=1;
    for(int j=0; j<n; j++)
    {
        for(int i=0; i<n; i++)
        {
            if(i!=j)
            {
                pro*=nums[i];
            }
        }
        answer[j]=pro;
        pro=1;
    }

    printf("Answer Array: \n");
    for(int i=0; i<n; i++)
        printf("%d, ",answer[i]);

    return 0;
}
