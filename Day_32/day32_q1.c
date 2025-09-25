// Q63 WAP to merge two arrays.

#include <stdio.h>
int main()
{
    int n1, n2, n;                     // Declaration

    // User to enter first array elements
    printf("Enter the number of array elements: ");
    scanf("%d",&n1);

    int a1[n1];
    printf("Enter %d array elements: ",n1);
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&a1[i]);
    }

    // User to enter second array elements
    printf("Enter the number of array elements: ");
    scanf("%d",&n2);

    int a2[n2];
    printf("Enter %d array elements: ",n2);
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&a2[i]);
    }

    // Merge two arrays
    int arr[n1+n2];
    
    for(int j=0;j<n1;j++)
    {
        arr[j]=a1[j];
    }

    for(int k=0;k<n2;k++)
    {
        arr[n1+k]=a2[k];
    }

    printf("Merged Array: \n");
    for(int i=0;i<(n1+n2);i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}                                   //  END of Program
