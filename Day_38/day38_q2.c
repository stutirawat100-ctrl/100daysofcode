// Q76 Check if a matrix is symmetric.

#include <stdio.h>
void main()
{
    int r, c, a;
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
            if(arr[i][j]!=arr[j][i])
            {
              a=1;
              break;  
            }
        }
    }

    if(a==1)
        printf("It is not a Symmetric Matrix.");
    else
        printf("It is a Symmetric Matrix.");
}