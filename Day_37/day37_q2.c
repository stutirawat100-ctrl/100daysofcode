#include <stdio.h>
void main()
{
    int r, c;
    printf(" \nEnter no. of rows: ");
    scanf("%d", &r);

    printf("Enter a no. of columns: ");
    scanf("%d",&c);
    int arr[r][c], a[c][r];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            a[j][i]=arr[i][j];
        }
    }

    printf(" \nTranspose of matrix: \n");
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

}