#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
   for(i=0;i<n;i++)
   {
    scanf("%d",&arr[i]);
   }
   printf("Array Created.\nPrinting the array:\n");
   for(i=0;i<n;i++)
   {
    printf("%d\t", arr[i]);
   }

}