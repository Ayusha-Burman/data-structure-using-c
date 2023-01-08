#include<stdio.h>
#include<stdlib.h>
/* Structure of a node */
struct node {
    int data;          // Data 
    struct node *next; // Address 
};
struct node* head;
void insertAtBeginning()
{
    int data;
    struct node *newnode;
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
       newnode->next = head;
       head = newnode;
       printf("Node Inserted\n");

    }
    
}
void lastinsert()
{
    int data;
    struct node *newnode, *temp;
    
    if (newnode==NULL)
    {
        printf("OVERFLOW");
    }
    else
    {
     printf("Enter the data to be inserted: ");
     scanf("%d", &data);
     newnode=(struct node*)malloc(sizeof(struct node));
     newnode->data=data;
     if(head==NULL)
     {
        newnode->next=NULL;
        newnode=head;
        printf("Node Inserted\n");
     }
     else
     {
       temp=head;
       while(temp->next != NULL)
       {
        temp=temp->next;
       }
       temp->next=newnode;
       newnode->next=NULL;
       printf("Node inserted\n");
     }
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
    if(ptr==NULL)
    {
        printf("Nothing to display");
    }
    else{
        printf("Data in the linked list are as follows:\n");
        while(ptr!=NULL)
        {
            printf("%d\t",ptr->data);
            ptr=ptr->next;
        }
    }
}
void deleteAtBeginning()
{
    struct node *ptr;
    if(head==NULL)
    {
        printf("UNDERFLOW");
    }
    else if (head->next==NULL)
    {
        printf("FIRST NODE DELETED: %d",head->data);
        head=NULL;
        free(head);
        
    }
    else
    {
        printf("FIRST NODE DELETED: %d",head->data);
        ptr=head;
        head=head->next;
        free(ptr);

    }
}
void deleteLast()
{
    struct node *ptr,*ptr1;
    if(head==NULL)
    {
        printf("UNDERFLOW");  
    }
    else if (head->next==NULL)
    {
        printf("LAST NODE DELETED: %d",head->data);
        head=NULL;
        free(head);
        
    }
    else
    {
        ptr=head;
        while(ptr->next!=NULL)
        {
            ptr1=ptr;
            ptr=ptr->next;
        }
            ptr1->next=NULL;
            
            printf("LAST NODE DELETED: %d",ptr->data);
            free(ptr);
        
    }

}
void deleteRandom()
{
    struct node *ptr,*ptr1;
    int loc,i;
    if(head==NULL)
    {
        printf("UNDERFLOW");  
    }
    else
    {
        printf("Enter the position from where the node is to be deleted: ");
        scanf("%d", &loc);
        ptr=head;
        for (i=0;i<loc;i++)
        {
            ptr1=ptr;
            ptr=ptr->next;
            if(ptr==NULL)
            {
                printf("\nCan't delete\n");
            }
        }
            ptr1->next=ptr->next;
            printf("Node deleted %d from %d position\n",ptr->data,loc);
            free(ptr);

       
    }
}
void search()
{
    struct node *ptr;
    int item,i=0,flag=0;
    ptr=head;
    if(ptr==NULL)
    {
        printf("List is empty");
    }
    else
    {
        printf("Enter the item which you want to search: ");
        scanf("%d",&item);
        while(ptr->next!=NULL)
        {
            if(ptr->data==item)
            {
                printf("Item found at positions %d",(i+1));
                flag = 0;
                break;
            }
            else
            {
              flag=1;
            }
            i++;
            ptr=ptr->next;
        }
        if(flag==1)
        {
            printf("Item not found");
        }
    }

}
int main()
{ int choice=0;
while(choice != 9)
{
    printf("\nChoose one option from the following list....\n");
    printf("1. Insert at Beginning\n2. Insert at the End\n3. Insert at specific Location\n4. Display Linked list\n5. Delete the first node\n6. Delete Last node\n7. Delete from mentioned position\n8. Search a node\n");
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
            deleteAtBeginning();
            break;

            case 6:
            deleteLast();
            break;
             
            case 7:
            deleteRandom();
            break;
 
            case 8:
            search();
            break;

            default:
            break;
            }
            
}
    return 0;
}