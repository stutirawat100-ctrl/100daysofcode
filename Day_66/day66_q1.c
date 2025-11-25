/* Q116 Write a program to take an integer array nums which contains only positive integers, and an 
integer target as inputs. The goal is to find two distinct indices i and j in the array such that 
nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any 
order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1". */

#include <stdio.h>

#define MAX 1000  // maximum array size

// Simple hash function for positive integers
int hash[10000];  // adjust size depending on input range

int main() 
{
    int n, target;
    int nums[MAX];

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &nums[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    // Initialize hash with -1
    for (int i = 0; i < 10000; i++) 
    {
        hash[i] = -1;
    }

    // Traverse array
    for (int i = 0; i < n; i++) 
    {
        int complement = target - nums[i];

        if (complement >= 0 && hash[complement] != -1) 
        {
            // Found solution
            printf("%d %d\n", hash[complement], i);
            return 0;
        }

        // Store index of current number
        hash[nums[i]] = i;
    }

    // If no solution
    printf("-1 -1\n");
    return 0;
}
