//operations in circular linked list
 
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head=NULL; 
void display();
void insert_at_start(int);
void insert_at_end(int);

int main()
{
    int n, ch;
    do
    {
        printf("\n\n Circular Linked List Menu\n1. Enter item at beginning\n2. Enter item at end \n3. Display\n0. Exit");
        printf("\nEnter Choice 0-2? : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
                printf("\nEnter number: ");
                scanf("%d", &n);
                insert_at_start(n);
                break;
            case 2:
                printf("\nEnter number: ");
                scanf("%d", &n);
                insert_at_end(n);
                break;
            
            case 3:
                display();
                break;
        }
    }while (ch != 0);
}

 

void insert_at_start(int item)
{
    struct node *temp=NULL; 
    struct node *nptr = (node *) malloc(sizeof(struct node));
    nptr->data = item;
    
     if (head==NULL)
     {
        head=nptr;
        nptr->next=head;
      }
 
     else{
        temp=head;
  
        while(temp->next!=head){
            temp=temp->next;
        }
            nptr->next=head;
            head=nptr;
            temp->next=head;
        }
}

void insert_at_end(int item ){
    struct node *temp;
    struct node *nptr = (node *) malloc(sizeof(struct node));
    nptr->data = item;

    if(head == NULL){
        head = nptr;
        nptr->next = head;
    }else{
        temp = head;
        while(temp->next != head){
            temp = temp->next;
        }
        temp->next = nptr;
        nptr->next = head;
    }
}


void display()
{
    struct node *temp = head;
    
    if(head==NULL)
    {
        
        printf("Link List is empty");
    }
    
    else
    {
        do{
            printf("\n%d", temp->data);
            temp =temp->next;
        }while (temp != head);
    }
}
