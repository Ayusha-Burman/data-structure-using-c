#include<stdio.h>
void updation(int,int,int,int[]);
void main()
{
    int arr[30];
    int i, n, data,pos;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the arary:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be inserted: ");
    scanf("%d", &data);
    printf("Enter the position where the data is to be inserted: ");
    scanf("%d",&pos);
    printf("Array elements before updation\n");  
    for (i = 0; i < n; i++)  
    {
       printf("%d ", arr[i]);  
    }
    updation(data,pos,n,arr);
    
  
}
void updation(int data, int pos,int n,int arr[])
{
  arr[pos-1]=data;
  printf("\nArray after updation:\n");
  int i;
  for(i=0;i<n;i++)
  {
     printf("%d ", arr[i]);  
  }
  
}