#include <stdio.h>
#include <stdlib.h>

/* Structure of a node */
struct node {
    int data;          // Data 
    struct node *next; // Address 
    struct node *prev; // Address 
};
struct node *head;  
void insertion_beginning();  
void insertion_last();  
void insertion_specified();  
void deletion_beginning();  
void deletion_last();  
void deletion_specified();  
void display();  
void search();  
void main ()  
{  
int choice =0;  
    while(choice != 9)  
    {  
        printf("\n*********Main Menu*********\n");  
        printf("\nChoose one option from the following list ...\n");  
        printf("\n===============================================\n");  
        printf("1. Insert at Beginning\n2. Insert at the End\n3. Insert at specific Location\n4. Display Linked list\n5. Delete the first node\n6. Delete Last node\n7. Delete specific node\n8. Search a node\n");
        printf("\nEnter your choice?\n");  
        scanf("\n%d",&choice);  
        switch(choice)  
         {  
            case 1:  
            insertion_beginning();  
            break;  
            case 2:  
            insertion_last();  
            break;  
            case 3:  
            insertion_specified();  
            break;  
            case 4: 
            display();  
            break;  
            case 5:
             deletion_beginning();  
            break;  
            case 6:  
            deletion_last();  
            break;  
            case 7: 
            deletion_specified();   
            break;  
            case 8:
            search();     
            break;  
            case 9:  
             exit(0);  
            break;  
            default:  
            printf("Please enter valid choice..");  
        }  
    }  
}  
 void insertion_beginning()
{
    struct node *ptr;
    int item;
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("\nOVERFLOW");  

    }
    else
    {
        printf("\nEnter Item value");  
        scanf("%d",&item);  
       if(head==NULL)
      {
        ptr->data=item;
        ptr->next=NULL;
        ptr->prev=NULL;
        head=ptr;
      }
      else
      {
        ptr->data=item;
        ptr->next=head;
        ptr->prev=NULL;
        head=ptr;
      }
       printf("\nNode inserted\n");  
    }
}
void insertion_last()
{
    struct node *ptr,*temp;
    int item;
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("\nOVERFLOW");  

    }
     else
    {
        printf("\nEnter Item value");  
        scanf("%d",&item);  
       if(head==NULL)
      {
        ptr->data=item;
        ptr->next=NULL;
        ptr->prev=NULL;
        head=ptr;
      }
      else
      {
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
       
        ptr->data=item;
        temp->next=ptr;
        ptr->prev=temp;
        ptr->next=NULL;
      }

}
printf("\nnode inserted\n");  
}
void insertion_specified()  
{
    struct node *ptr, *temp;
    int item,loc,i;  
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("\nOVERFLOW");  
    }
    else
    {
        temp=head;
        printf("Enter the location where the data is to be inserted: ");
        scanf("%d", &loc);
        for(i=0;i<(loc-1);i++)
        {
            temp=temp->next;
            if(temp==NULL)
            {
                printf("Cannot insert!. There are less than %d elements", loc);
                return;
            }

        }
         printf("Enter value");  
       scanf("%d",&item);  
       ptr->data = item;  
       ptr->next=temp->next;
       ptr->prev=temp;
       temp->next->prev=ptr;  
       temp->next=ptr;
       printf("\nnode inserted\n");  

    }
}
void display()  
{  
    struct node *ptr;  
    printf("\n printing values...\n");  
    ptr = head;  
    while(ptr != NULL)  
    {  
        printf("%d\t",ptr->data);  
        ptr=ptr->next;  
    }  
}   
void deletion_beginning()
{
 struct node *ptr;
 if(head==NULL)
 {
    printf("\nUNDERFLOW\n");
 }
 else if(head->next == NULL)  
    {  
        head = NULL;   
        free(head);  
        printf("\nnode deleted\n");  
    }  
 else
 {
    ptr=head;
    head=head->next;
    head->prev=NULL;
    free(ptr);
    printf("\nnode deleted\n");  

 }
}
void deletion_last()
{
    struct node *ptr;
 if(head==NULL)
 {
    printf("\nUNDERFLOW\n");
 }
 else if(head->next == NULL)  
    {  
        head = NULL;   
        free(head);  
        printf("\nnode deleted\n");  
    }  
    else
    {
        ptr=head;
        while(ptr->next !=NULL)
        {
            ptr=ptr->next;
        }
        ptr->prev->next=NULL;
        free(ptr);
        printf("\nnode deleted\n");  
    }

}
void deletion_specified()
{
    struct node *ptr,*temp;
    int val;
 if(head==NULL)
 {
    printf("\nUNDERFLOW\n");
 }
 else
 {
    printf("\n Enter the data after which the node is to be deleted : ");  
    scanf("%d", &val);  
    ptr = head; 
    while(ptr->data!=val)
    {
        ptr=ptr->next;
    } 
    if(ptr -> next == NULL)  
    {  
        printf("\nCan't delete\n");  
    }  
    else if(ptr->next->next==NULL)
    
    {
      ptr->next=NULL;
    }
    else
    {
        temp=ptr->next;
        ptr->next=temp->next;
        temp->next->prev=ptr;
        free(temp);
        printf("\nnode deleted\n");  
    }
 }
}
void search()
{
     struct node *ptr;  
    int item,i=0,flag;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("\nEmpty List\n");  
    }  
    else  
    {   
        printf("\nEnter item which you want to search?\n");   
        scanf("%d",&item);  
        while (ptr!=NULL)  
        {  
            if(ptr->data == item)  
            {  
                printf("\nitem found at location %d ",i+1);  
                flag=0;  
                break;  
            }   
            else  
            {  
                flag=1;  
            }  
              i++;  
            ptr = ptr -> next;  
        }  
        if(flag==1)  
        {  
            printf("\nItem not found\n");  
        }  
    }     
}
