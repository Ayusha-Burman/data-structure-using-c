#include<stdio.h>
void main()
{
    int n,i;
    int start,end;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
   for(i=0;i<n;i++)
   {
    scanf("%d",&arr[i]);
   }
   printf("Enter the starting and ending index of the sub array:\n");
   scanf("%d%d",&start,&end);
   printf("Sub array:\n");
   for(i=(start-1);i<end;i++)
   {
     printf("%d\t",arr[i]);
   }

}