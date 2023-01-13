#include<stdio.h>
void main()
{
    int arr[30];
    int i, n,pos;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the arary:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array elements before deletion\n");  
    for (i = 0; i < n; i++)  
    {
       printf("%d ", arr[i]);  
    }
        
    printf("\n");  
    printf("Enter the position where deletion is to be performed:\n");
    scanf("%d",&pos);
    if(pos>n+1)
    {
        printf(" \n Deletion is not possible in the array.");
    }
    else
    {
        for(i = pos - 1; i < n -1; i++)
        {
            arr[i] = arr[i+1]; 
        }
         printf (" \n The resultant array is: \n");  
          
        // display the final array  
        for (i = 0; i< n - 1; i++)  
        {  
            printf (" arr[%d] = ", i);  
            printf (" %d \n", arr[i]);  
        }  
    }  
    }
    
