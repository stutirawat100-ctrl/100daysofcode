//Find the sum of all elements in a matrix.

#include <stdio.h>

int main() 
{
    int  r, c,sum = 0;
    int i, j;
    printf("Enter the number of rows and columns:\n");
    scanf("%d%d",&r,&c);
    
    int arr[r][c];

    printf("Enter the array elements:\n");
    for(i = 0; i < r; i++)
    {
    for(j = 0; j < c; j++)
    {
    scanf("%d", &arr[i][j]);
    }
  }
  
    for(i = 0; i < r; i++) 
    {
        for(j = 0; j < c; j++) 
        {
            sum += arr[i][j];
        }
     }
    printf("Sum :%d ", sum);

    return 0;
}                              // END of program
