/* Q111 Write a program to take an integer array arr and an integer k as inputs. The task is to find the first 
negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print 
"0" for that window. Print the results separated by spaces as output.                                        */

#include <stdio.h>

// Function to print the first negative integer in every window of size k
void firstNegativeInWindow(int arr[], int n, int k) 
{
    int i, start = 0, end = 0;
    int negatives[n];  // To store indices of negative numbers
    int negCount = 0;  // Count of negatives in current window

    // Traverse the array
    while (end < n) 
    {
        // If current element is negative, add its index to negatives[]
        if (arr[end] < 0) 
        {
            negatives[negCount++] = end;
        }

        // Check if window size reached
        if (end - start + 1 == k) 
        {
            // Print the first negative in the current window
            if (negCount > 0) 
            {
                printf("%d ", arr[negatives[0]]);
                // If the first negative is going out of the window, remove it
                if (negatives[0] == start) 
                {
                    for (i = 0; i < negCount - 1; i++) 
                    {
                        negatives[i] = negatives[i + 1];
                    }
                    negCount--;
                }
            } 
            else 
            {
                printf("0 ");
            }
            // Slide the window
            start++;
        }
        end++;
    }
}

int main() 
{
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter window size k: ");
    scanf("%d", &k);

    printf("Output: ");
    firstNegativeInWindow(arr, n, k);

    return 0;
}
