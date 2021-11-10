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
void delete_specified_node();
void delete_specified_element();

int main()
{
    int n, ch;
    do
    {
        printf("\n\n Circular Linked List Menu\n1. Insert item at beginning\n2. Insert item at end\n3. Delete an element\n4. Delete a node \n5. Display\n0. Exit");
        printf("\nEnter Choice 0-5? : ");
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
                delete_specified_element();
                break;
            case 4:
                delete_specified_node();
                break;
            
            case 5:
                display();
                break;
        }
    }while (ch != 0);
}

//insert at the beginning
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

//insert at the end
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

//insert at specified position

//delete from specified position
void delete_specified_element(){
    int value;
	struct node *temp = head, *prev;
	printf("Enter the element you want to delete : ");
	scanf("%d",&value);
	// checks if the list is empty
	if (head == NULL)
        return;
    // Find the required node
    while (temp->data != value)
    {
        if (temp->next == head) // if the temp reaches the last node and does not find the element
        {
            printf("\nGiven node is not found in the list!!!");
            break;
        }

        prev = temp;
        temp = temp->next;
    }

    // Check if node is only node
    if (temp->next == head)
    {
        head = NULL;
        free(temp);
        return;
    }

    // If more than one node, check if
    // it is first node
    if (temp == head)
    {
        prev = head;
        while (prev->next != head)
            {prev = prev->next;}
        head = temp->next;
        prev->next = head;
        free(temp);
    }

    // check if node is last node
    else if (temp->next == head && temp == head)
    {
        prev->next = head;
        free(temp);
    }
    else
    {
        prev->next = temp->next;
        free(temp);
    }
}



//delete from specified node
void delete_specified_node(){
    int nodeToBeDeleted,count=0;
	struct node *temp = head, *prev;
	printf("Enter the node you want to delete : ");
	scanf("%d",&nodeToBeDeleted);
	// checks if the list is empty
	if (head == NULL)
        return;
    // Find the required node
    while (temp->next != head)
    {
        count = count +1;
        if (temp->next == head) // if the temp reaches the last node and does not find the element
        {
            printf("\nGiven node is not found in the list!!!");
            break;
        }
        else if (count == nodeToBeDeleted)
         {
             prev = head;
             while (prev->next != head)
                 {prev = prev->next;}
             head = temp->next;
             prev->next = head;
             free(temp);
         }

         // check if node is last node
         else if (temp->next == head && temp == head)
         {
             prev->next = head;
             free(temp);
         }
         else
         {
             prev->next = temp->next;
             free(temp);
         }

        prev = temp;
        temp = temp->next;
    }

    // Check if node is only node
    if (temp->next == head)
    {
        head = NULL;
        free(temp);
        return;
    }

    // If more than one node, check if
    // it is first node
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
