#include<stdio.h>
void main()
{
    int arr[30];
    int i, n, data,pos;
    printf("Enter the initial size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the arary:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array elements before insertion\n");  
    for (i = 0; i < n; i++)  
    {
       printf("%d ", arr[i]);  
    }
        
    printf("\n");  
  
    printf("Array insertion is to be performed\n");
    printf("Enter the position where the element is to entered:\n");
    scanf("%d",&pos);
    printf("Enter the element to be inserted:\n");
    scanf("%d",&data);
    
    for(i=n;i>=pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos-1]=data;
    printf("\n");  
    printf("Array elements after insertion\n");  
    for (i = 0; i <= n; i++)  
    {
       printf("%d ", arr[i]);  
    }
}