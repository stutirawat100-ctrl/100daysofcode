// Q77 Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>
int main()
{
    int r, c;
    printf(" \nEnter no. of rows: ");
    scanf("%d", &r);

    printf("Enter a no. of columns: ");
    scanf("%d",&c);

    int n = (r < c) ? r : c;        // In case of non-square matrix
    int arr[r][c], diag[n];
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
                diag[i]=arr[i][j];
            }
        }
    }

    // Check for distinct elements
    int distinct = 1; // Assume distinct initially
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (diag[i] == diag[j])
            {
                distinct = 0;
                break;
            }
        }
        if (!distinct)
            break;
    }

    if (distinct)
        printf("All diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are not distinct.\n");

    return 0;
}
