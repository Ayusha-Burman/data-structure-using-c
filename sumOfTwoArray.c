#include<stdio.h>
void main()
{
    int n,i;
    int sum=0;
    printf("Enter the size of the arrays: ");
    scanf("%d", &n);
    int arr1[n];
    int arr2[n];
    printf("Enter %d elements for array 1:\n", n);
   for(i=0;i<n;i++)
   {
    scanf("%d",&arr1[i]);
   }
   printf("Enter %d elements for array 2:\n", n);
    for(i=0;i<n;i++)
   {
    scanf("%d",&arr2[i]);
   }
   printf("Resultant array:\n");
 for(i=0;i<n;i++)
 {
   sum=arr1[i]+arr2[i];
   printf("%d\t",sum);
 }
}
