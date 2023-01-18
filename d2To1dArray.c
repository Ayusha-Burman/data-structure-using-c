#include<stdio.h>
void main()
{
    int n,m,i,j;
    printf("Enter the number of rows of the array: ");
    scanf("%d", &m);
    printf("Enter the number of columns of the array: ");
    scanf("%d", &n);
    int arr2d[m][n];
    int p=m*n;
    int arr1d[p];
    printf("Enter %d elements:\n",(m*n));
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr2d[i][j]);
        }
        printf("\n");
    }
    printf("The array is as follows:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",arr2d[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            arr1d[i*n+j]=arr2d[i][j];
        }
       
    }
    printf("Mapping the elements in a 1D array:\n");
    for(i=0;i<p;i++)
    {
        printf("%d\t",arr1d[i]);
    }
    
}