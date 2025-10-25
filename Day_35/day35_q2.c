#include <stdio.h>
int main()
{
    int  n, k, q;
    printf(" \nEnter the no. of elements.");
    scanf("%d",&n);

    int a[n], arr[n];
    printf("Enter %d array elements.",n);

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter a no. for position change.");
    scanf("%d", &q);
    int j=0;

    for(int i=(q+1);i<n;i++,j++)
    {
        arr[j]=a[i];
    }

    k=0;
    for(int i=j;i<n;i++,k++)
    {
        arr[i]=a[k];
    }

    printf("Rotated Array: \n");
    for(int h=0;h<n;h++)
    {
        printf("%d ", arr[h]);
    }
    return 0;
}