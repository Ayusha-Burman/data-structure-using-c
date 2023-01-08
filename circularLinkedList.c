#include<stdio.h>
#include<stdlib.h>
/* Structure of a node */
struct node {
    int data;          // Data 
    struct node *next; // Address 
};
struct node *head;
void insertAtBeginning()
{
    int data;
    struct node *newnode, *temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    if (newnode==NULL)
    {
        printf("OVERFLOW");
    }
    else
    {
        printf("Enter the data to be inserted: ");
        scanf("%d", &data);
       newnode->data=data;
       if(head==NULL)
       {
         head = newnode;
         newnode->next = head;
       }
       else
       {
         temp=head;
         while(temp->next != head)
         {
            temp=temp->next;
         }
         newnode->next=head;
         temp->next=newnode;
         head=newnode;
       }
       
       
       printf("Node Inserted\n");

    }
    
}
void lastinsert()
{
    int data;
    struct node *newnode, *temp;

    newnode=(struct node*)malloc(sizeof(struct node));
    if (newnode==NULL)
    {
        printf("OVERFLOW");
    }
    else
    {
        printf("Enter the data to be inserted: ");
        scanf("%d", &data);
       newnode->data=data;
       if(head==NULL)
       {
         head = newnode;
         newnode->next = head;
       }
       else
       {
        temp=head;
        while(temp->next != head)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->next=head;
       }
       printf("Node Inserted\n");

}
}
void insertSpecifiedLoc()
{
    int data;
    struct node *newnode, *temp;
    int loc,i;
    newnode=(struct node*)malloc(sizeof(struct node));
    if (newnode==NULL)
    {
        printf("OVERFLOW");
    }
    else
    {
        printf("Enter the data to be inserted: ");
        scanf("%d", &data);
        newnode->data=data;
        printf("Enter the location where the data is to inserted: ");
        scanf("%d", &loc);
        temp=head;
        for(i=0;i<(loc-1);i++)
        {
            temp=temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;
        printf("Node Inserted");

    }

}
void display()  
{  
    struct node *ptr;  
    ptr=head;  
    if(head == NULL)  
    {  
        printf("\nnothing to print");  
    }     
    else  
    {  
        printf("\n printing values ... \n");  
          
        while(ptr -> next != head)  
        {  
          
            printf("%d\n", ptr -> data);  
            ptr = ptr -> next;  
        }  
        printf("%d\n", ptr -> data);  
    }  
              
}  
void deleteBegin()
{
    struct node *temp;
     if(head == NULL)  
    {  
        printf("\nUNDERFLOW");    
    }  
    else if(head->next==NULL)
    {
        head=NULL;
        free(head);
        printf("\nNode Deleted\n");
    }
    else
    {
        temp=head;
        while(temp->next != head)
        {
            temp=temp->next;
        }
        temp->next=head->next;
        free(head);
        head=head->next;
         printf("\nnode deleted\n");  
    }
}
void deleteLast()
{
    struct node *temp, *temp1;
     if(head == NULL)  
    {  
        printf("\nUNDERFLOW");    
    }  
    else if(head->next==NULL)
    {
        head=NULL;
        free(head);
        printf("\nNode Deleted\n");
    }
    else
    {
         temp=head;
        while(temp->next != head)
        { 
            temp1=temp;
            temp=temp->next;
        }
        temp1->next = temp -> next;  
        free(temp);  
        printf("\nNode Deleted\n");
    }

}
void search()  
{  
    struct node *ptr;  
    int item,i=0,flag=1;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("\nEmpty List\n");  
    }  
    else  
    {   
        printf("\nEnter item which you want to search?\n");   
        scanf("%d",&item);  
        if(head ->data == item)  
        {  
        printf("item found at location %d",i+1);  
        flag=0;  
        }  
        else   
        {  
        while (ptr->next != head)  
        {  
            if(ptr->data == item)  
            {  
                printf("item found at location %d ",i+1);  
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
        }  
        if(flag != 0)  
        {  
            printf("Item not found\n");  
        }  
    }     
          
}  
int main()
{ int choice=0;
while(choice != 8)
{
    printf("\nChoose one option from the following list....\n");
    printf("1. Insert at Beginning\n2. Insert at the End\n3. Insert at specific Location\n4. Display Linked list\n5. Delete the first node\n6. Delete Last node\n7. Search a node\n");
    printf("Enter your choice: ");
            scanf("%d",&choice);
            switch (choice)
            {
            case 1:
            insertAtBeginning();
            break;

            case 2:
            lastinsert();
            break;
      
            case 3:
            insertSpecifiedLoc();
            break;

            case 4:
            display();
            break;
            
            case 5:
            deleteBegin();
            break;

            case 6:
            deleteLast();
            break;

            case 7:
            search();
            break;

            default:
            break;
            }
            
}
    return 0;
}