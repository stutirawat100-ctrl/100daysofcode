/* Q112 Write a program to take an integer array arr as input. The task is to find the maximum 
sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If 
all elements are negative, print the largest (least negative) element.                      */

#include <stdio.h>

int maxSubarraySum(int arr[], int n) 
{
    int max_so_far = arr[0];   // Initialize with first element
    int curr_max = arr[0];     // Current maximum sum ending here

    for (int i = 1; i < n; i++) 
    {
        // Either extend the previous subarray or start new from current element
        curr_max = (arr[i] > curr_max + arr[i]) ? arr[i] : curr_max + arr[i];
        
        // Update overall maximum
        if (curr_max > max_so_far) 
        {
            max_so_far = curr_max;
        }
    }
    return max_so_far;
}

int main() 
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int result = maxSubarraySum(arr, n);
    printf("Maximum subarray sum: %d\n", result);

    return 0;
}
