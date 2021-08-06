//various operations in doubly likned list
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *previous;
    struct node *next;
    
};
struct node *head=NULL; 

void display();
void insert(int);
void deletefirstelement();
void deletelastelement();
void deletespecifiedelement();
int main()
{
    int n, ch;
    do
    {
        printf("\n\nList Menu\n0. Exit\n1. Enter item \n2. Display\n3. Delete First Element\n4. Delete last element\n5. Delete specified element");
        printf("\nEnter Choice 0-5? : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
                printf("\nEnter number: ");
                scanf("%d", &n);
                insert(n);
                break;
            
            case 2:
               display();
                break;
            case 3:
               deletefirstelement();
                break;
            case 4:
               deletelastelement();
                break;
            case 5:
               deletespecifiedelement();
                break;
        }
    }while (ch != 0);
}

void insert(int item)
{
     
  struct node *temp=NULL;
    struct node *nptr =(node *) malloc(sizeof(struct node));
    nptr->data = item;
    
  
    if (head==NULL)
    {
        head=nptr;
        nptr->next=NULL;
        nptr->previous=NULL;
    }
 
    else{
        
        temp=head;
        
        while(temp->next!=NULL)
        {
            
        temp=temp->next;
            
        }
        
       nptr->previous=temp;
       nptr->next=NULL;
       temp->next=nptr;
       
       
    }
}
void display()
{
    struct node *temp=NULL;
    
    if(head==NULL)
    {
        
        printf("Link List is empty");
    }
    
    else
    {
        
   
    
   temp=head;
    
    while (temp!=NULL)
    {
        printf("\n%d", temp->data);
        temp =temp->next;
    }

 

 

 

 
}
}

 

 


void deletefirstelement(){
    struct node *temp;
    
    if(head==NULL){
        printf("Linked List is empty");
    }
    
    else if(head->next==NULL)
    
    {
       temp=head;
       printf("Deleted Item=%d",temp->data);
        head=NULL;
        free(temp);
    }
    else
    {
        temp=head;
        printf("Deleted Item=%d",temp->data);
        head=temp->next;
        head->previous=NULL;
        free(temp);
        
    }
} 
void deletelastelement(){
    struct node *temp;
    
    if(head==NULL){
        printf("Linked List is empty");
    }
    
    else if(head->next==NULL)
    
    {
       temp=head;
       printf("Deleted Item=%d",temp->data);
        head=NULL;
        free(temp);
    }
    else
    {
        temp=head;
        printf("Deleted Item=%d",temp->data);
        head=temp->next;
        head->previous=NULL;
        free(temp);
        
    }
} 

void deletespecifiedelement(){
    struct node *temp;
}
