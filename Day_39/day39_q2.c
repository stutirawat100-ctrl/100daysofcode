// Q78 Find the sum of main diagonal elements for a square matrix.

#include <stdio.h>
int main()
{
    int r, c,sum=0;
    printf(" \nEnter no. of rows: ");
    scanf("%d", &r);

    printf("Enter a no. of columns: ");
    scanf("%d",&c);

    int arr[r][c];
    printf("Enter matrix elements:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==j)
            {
                sum+=arr[i][j];
            }
        }
    }

    printf("Sum of the main diagonal elements of a square array: %d", sum);
    return 0;
}