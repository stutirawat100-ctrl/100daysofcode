// Q79 Diagonal Traversal of a Matrix

#include <stdio.h>

int main()
{
    int r, c;
    printf("Enter number of rows and columns: ");
    scanf("%d", &r);
    scanf("%d", &c);

    int arr[r][c];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Diagonal Traversal:\n");

    // Step 1: Traverse diagonals starting from first row
    for (int col = 0; col < c; col++)
    {
        int i = 0, j = col;
        while (i < r && j >= 0)
        {
            printf("%d ", arr[i][j]);
            i++;
            j--;
        }
    }

    // Step 2: Traverse diagonals starting from last column (excluding first row)
    for (int row = 1; row < r; row++)
    {
        int i = row, j = c - 1;
        while (i < r && j >= 0)
        {
            printf("%d ", arr[i][j]);
            i++;
            j--;
        }
    }

    printf("\n");
    return 0;
}
