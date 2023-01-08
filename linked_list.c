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
        for(i=0;i<loc;i++)
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
            printf("%d",ptr->data);
            ptr=ptr->next;
        }
    }
}
int main()
{ int choice=0;
while(choice != 9)
{
    printf("Choose one option from the following list....\n");
    printf("1. Insert at Beginning\n2. Insert at the End\n3. Inser at specific Location\n4. Display Linked list\n");
    printf("Enter your choice: ");
            scanf("%d ",&choice);
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

            default:
                break;
            }
            
}
    return 0;
}