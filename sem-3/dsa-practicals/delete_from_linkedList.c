//Delete first element from linked list
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};


struct node *head=NULL; 
 
void display();
void insert(int);
void deletefirstelement();

int main()
{
    int n, ch;
    do
    {
        printf("\n\nList Menu\n1. Enter item \n2. Display\n3. Delete first element\n0. Exit");
        printf("\nEnter Choice 0-3? : ");
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
        }
    }while (ch != 0);
}

 

void insert(int item)
{
    struct node *temp;
    struct node *nptr = (node *) malloc(sizeof(struct node));
    nptr->data = item;
    
 if (head==NULL){
    nptr->next=NULL;
    head=nptr;
  }
    else
    {
        temp=head;
        while (temp->next!= NULL)
        {
            temp =temp->next;
        }
        temp->next=nptr;
        nptr->next=NULL;
    }

}

void display(){
    struct node *temp;
    
    if(head==NULL)
    {
        
        printf("Link List is empty !");
    }
    
    else
    {
        temp = head;
        while (temp != NULL)
        {
            printf("\n%d", temp->data);
            temp =temp->next;
        }
    }
}


void deletefirstelement(){
    
    struct node *temp;
    
    temp=head;
    head=head->next;
    
    printf("Deleted item : %d",temp->data);
    free(temp);
    
}

void deletelastelement(){

}
