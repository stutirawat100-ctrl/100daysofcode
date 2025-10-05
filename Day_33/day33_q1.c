//Search in a sorted array using binary search.

#include <stdio.h>

int main() 
{

  int num,n,mid;

  printf("Enter the size of array: ");
  scanf("%d",&n);
  int arr[n];
 
    for(int i = 0;i < n;i++)
    {
    scanf("%d", &arr[i]);
    }
    printf("Enter the number to be searched: ");
    scanf("%d",&num);
    int l = 0,u = n-1;

    while (l <= u) 
    {
        mid = (l + u) / 2;

        if (arr[mid] == num) 
        {
            printf("Found at index %d\n", mid);
            break;
        } 
        else if (arr[mid] < num) 
        {
            l = mid + 1;
        } 
        else if (arr[mid] > num) 
        {
            u = mid - 1;
        } 
    }
    
  return 0;
}                                                   // END of program
