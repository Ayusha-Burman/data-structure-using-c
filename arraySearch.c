#include<stdio.h>
void main()
{
    int arr[30];
    int i, n,item;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the arary:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element which you want to search:\n");
    scanf("%d",&item);
    for(i=0;i<n;i++)
    {
        if(arr[i]==item)
        {
            printf("ITEM FOUND");
        }
    }
}