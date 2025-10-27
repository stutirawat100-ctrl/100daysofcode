// Q80 Multiply two matrices.

#include <stdio.h>
int main() 
{
    int m, n, p, q;
    int i, j, k;

    // Input order of matrix A
    printf(" \nEnter the order of matrix A (m x n): ");
    scanf("%d %d", &m, &n);

    // Input order of matrix B
    printf("Enter the order of matrix B (p x q): ");
    scanf("%d %d", &p, &q);

    // Check compatibility for multiplication
    if (n != p) 
    {
        printf("\nMatrix multiplication not possible!\n");
       
        printf("Reason: Number of columns in A (%d) != Number of rows in B (%d)\n", n, p);
        return 0;
    }

    int A[m][n], B[p][q], C[m][q];

    // Input matrix A
    printf("\nEnter elements of Matrix A (%d x %d) in row-major order:\n", m, n);
    for (i = 0; i < m; i++) 
    {	
        for (j = 0; j < n; j++) 
        {  	
            scanf("%d", &A[i][j]);
        }
    }

    // Input matrix B
    printf("\nEnter elements of Matrix B (%d x %d) in row-major order:\n", p, q);
    for (i = 0; i < p; i++) 
   {	
        for (j = 0; j < q; j++) 
        {	
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize resultant matrix C with zeros
    for (i = 0; i < m; i++) 
   {
        for (j = 0; j < q; j++) 
        {
            C[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (i = 0; i < m; i++) 
    {
        for (j = 0; j < q; j++) 
        {
            for (k = 0; k < n; k++) 
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print Matrix A
    printf("\nMatrix A:\n");
    for (i = 0; i < m; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }
    
    // Print Matrix B
    printf("\nMatrix B:\n");
    for (i = 0; i < p; i++) 
   {
        for (j = 0; j < q; j++) 
       {
            printf("%4d", B[i][j]);
        }
        printf("\n");
    }

    // Print Resultant Matrix C
    printf("\nResultant Matrix (A x B):\n");
    for (i = 0; i < m; i++) 
    {
        for (j = 0; j < q; j++) 
       {
            printf("%4d", C[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}									// END of program
