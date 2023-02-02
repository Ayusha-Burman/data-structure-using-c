#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;          // Data 
    struct node *next; // Address 
    struct node *prev; // Address 
};
struct node *head; 
void insertion_beginning();  
void insertion_last();
void display();  
void insertion_specified();  
void deletion_beginning();  
void deletion_last();  
void main ()  
{  
int choice =0;  
    while(choice != 9)  
    {  
        printf("\n*********Main Menu*********\n");  
        printf("\nChoose one option from the following list ...\n");  
        printf("\n===============================================\n");  
        printf("1. Insert at Beginning\n2. Insert at the End\n3. Display Linked list\n4. Insert at specific Location \n5. Delete the first node\n6. Delete Last node\n7. Delete specific node\n8. Search a node\n");
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
            display(); 
            break;  
            case 4: 
            insertion_specified();  
            break;  
            case 5:
             deletion_beginning();  
            break;  
            case 6:  
            deletion_last();  
            break;
            default:  
            printf("Please enter valid choice..");  
        }  
    }  
}
    void insertion_beginning()
    {
        struct node *newnode,*temp;
        newnode=(struct node*)malloc(sizeof(struct node));
        int item;
        if(newnode==NULL)
        {
            printf("OVERFLOW\n");
        }
        else
        {
           printf("Enter the item to be inserted: ");
           scanf("%d",&item);
           newnode->data=item;
           if(head==NULL)
           {
            head=newnode;
            newnode->next=head;
            newnode->prev=head;
           }
           else
           {
            temp=head;
            while(temp->next!=head)
            {
                temp=temp->next;
            }
            temp->next=newnode;
            newnode->prev=temp;
            newnode->next=head;
            head->prev=newnode;
            head=newnode;
           }
           printf("Node Inserted\n");
        }

    }
   void insertion_last()
   {
    struct node *newnode,*temp;
        newnode=(struct node*)malloc(sizeof(struct node));
        int item;
        if(newnode==NULL)
        {
            printf("OVERFLOW\n");
        }
        else
        {
           printf("Enter the item to be inserted: ");
           scanf("%d",&item);
           newnode->data=item;
           if(head==NULL)
           {
            head=newnode;
            newnode->next=head;
            newnode->prev=head;
           }

         else
           {
            temp=head;
            while(temp->next!=head)
            {
                temp=temp->next;
            }
            temp->next=newnode;
            newnode->prev=temp;
            newnode->next=head;
            head->prev=newnode;
           }
           printf("Node Inserted\n");
        }
   }
     void display()
     {
        struct node *temp;
        temp=head;
        if(head==NULL)
        {
            printf("UNDERFLOW\n");
        }
        else
        {
            printf("Printing Values...\n");
            while(temp->next!=head)
            {
                printf("%d -> ",temp->data);
                temp=temp->next;
            }
            printf("%d ",temp->data);
        }
     }
     void insertion_specified()
     {
        struct node *newnode,*temp;
        int item,i,pos;
        newnode=(struct node*)malloc(sizeof(struct node));
        if(newnode==NULL)
        {
            printf("OVERFLOW\n");
        }
        else
        {
            temp=head;
            printf("Enter the item to be inserted: ");
            scanf("%d",&item);
            newnode->data=item;
            printf("Enter the position where the item is to be inserted: ");
            scanf("%d",&pos);
            for(i=1;i<(pos-1);i++)
            {
                temp=temp->next;
            }
            newnode->next=temp->next;
            temp->next->prev=newnode;
            temp->next=newnode;
            newnode->prev=temp;
            printf("Node Inserted\n");
        }
        
     }
     void deletion_beginning()
     {
        struct node *temp;
        if(head==NULL)
        {
            printf("\nUNDERFLOW\n");
        }
        else if(head->next==head)
        {
            head=NULL;
            free(head);
            printf("\nNode deleted");
        }
        else
        {
            temp=head;
            while(temp->next != head)
            {
                temp=temp->next;
            }
            temp->next=head->next;
            head->next->prev=temp;
            free(head);
            head=temp->next;
            printf("\nNode deleted");
        }
         
     }
     void  deletion_last()
     {
       struct node *temp;
       if(head==NULL)
       {
        printf("\nUNDERFLOW\n");
       }
       else if (head->next==head)
       {
        head=NULL;
        free(head);
        printf("\nNode Deleted\n");
       }
       else
       {
        temp=head;
        while(temp->next!= head)
        {
            temp=temp->next;
        }
        temp->prev->next=head;
        head->prev=temp->prev;
        free(temp);
        printf("\nNODE DELETED\n");
       }
       
     }
     