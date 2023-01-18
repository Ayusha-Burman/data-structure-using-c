#include<stdio.h>
int sumArray(int,int[]);
void main()
{
    int n,i;
    int sum=0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
   for(i=0;i<n;i++)
   {
    scanf("%d",&arr[i]);
   }
   sum=sumArray(n,arr);
   printf("Sum of the elements of the array: %d", sum);
   
}
int sumArray(int n,int arr[])
{
  int i;
  int sum=0;
  for(i=0;i<n;i++)
  {
    sum=sum+arr[i];
  }
  return sum;
}