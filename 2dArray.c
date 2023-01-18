#include<stdio.h>
void main()
{
    int n,m,i,j;
    printf("Enter the number of rows of the array: ");
    scanf("%d", &m);
    printf("Enter the number of columns of the array: ");
    scanf("%d", &n);
    int arr[m][n];
    printf("Enter %d elements:\n",(m*n));
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    printf("The array is as follows:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

}