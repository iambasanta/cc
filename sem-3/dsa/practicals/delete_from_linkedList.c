//Delete  elements from linked list
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
void delete_last_element();
void delete_specified_element();
void delete_specified_node();

int main()
{
    int n, ch;
    do
    {
        printf("\n\nList Menu\n1. Enter item \n2. Display\n3. Delete first element\n4. Delete last element\n5. Delete specific element\n6. Delete specific node\n0. Exit");
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
            case 4:
                delete_last_element();
                break;
            case 5:
                delete_specified_element();
                break;
            case 6:
                delete_specified_node();
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

void delete_last_element(){
    struct node *temp,*temp1;
    if(head == NULL){
        printf("\nEmpty linked List !");
    }
    else{
        temp = head;
        while(temp->next != NULL){
            temp1 = temp;
            temp = temp->next;
        }
        temp1->next = NULL;
        free(temp);
    }

}

void delete_specified_element(){
    struct node *temp,*prev,*ptr;
    int value;
    printf("Enter element you want to delete :");
    scanf("%d",&value);

    if(head == NULL){
        printf("Linked list is empty !");
    }
    else{
        temp = head;
        prev = temp;
        while(temp->next != NULL){
            if(temp->data == value){
                printf("Deleted item : %d",temp->data);
                prev->next = temp->next;
                temp->next = NULL;
            }
            else{
                prev = temp;
                temp = temp->next;
            }
        }
        free(temp);
    }
}
 
void delete_specified_node(){
    struct node *temp,*prev;
    int nodeToBeDeleted,count=0;
    printf("Enter a position of node you want to delete :");
    scanf("%d",&nodeToBeDeleted);

    if(head == NULL){
        printf("Linked list is empty !");
    }
    else{
        temp = head;
        prev = temp;
        while(temp->next != NULL){
            count = count + 1;
            if(count == nodeToBeDeleted){
                printf("%d'th node is deleted having value :%d ",count,temp->data);
                prev->next = temp->next;
                temp->next = NULL;
            }
            else{
                prev = temp;
                temp = temp->next;
            }
        }
        free(temp);
    }
}
