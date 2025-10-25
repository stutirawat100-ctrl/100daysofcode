// Q73 Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>
int main()
{
    int r, c, i, j;

    printf(" \nEnter the no. of rows of an array: ");
    scanf("%d", &r);

    printf(" \nEnter the no. of columns of an array: ");
    scanf("%d", &c);
    
    int arr[r][c];
    printf("Enter %d elements:\n", r*c);
    for(i = 0; i < r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d", &arr[i]);
        }
    }

    // To find the sum of each row of a matrix and store it.
    int a[r];
    printf("Sum of each row of a matrix: \n");
    for(i=0; i<r; i++)
    {
        int sum=0;
        for(j=0; j<c; j++)
        {
            if(a[j]==0)
            {
                sum=0;
                break;
            }

            else
            sum+=arr[i][j];
        }

        if(sum!=0)
        {
            a[i]=sum;
            printf("%d ",a[i]);
        }
    }
    
    return 0;
}
