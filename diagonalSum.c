#include<stdio.h>
void main()
{
    int n,i,j;
    int sum=0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n][n];
    printf("Enter %d elements:\n",(n*n));
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
       
    }
    printf("The array is as follows:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("Calculating diagonal sum:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i+j==(n-1) || i==j)
            {
                sum=sum+arr[i][j];
                printf("sum= %d\t", sum);
            }
          
        }
 
    }
    printf("Diagonal Sum: %d", sum);
}