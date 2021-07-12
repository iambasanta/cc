//insert at  specified position
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
void insertspecifedposition();



int main()
{
    int n, ch;
    do
    {
        printf("\n\nList Menu\n1. Enter item \n2. Display\n3. Enter in specified position\n0. Exit");
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

                insertspecifedposition();
                break;


        }
    }while (ch != 0);
}



void insert(int item){
    struct node *temp;
    struct node *nptr = (node *)malloc(sizeof(struct node));
    nptr->data = item;

    if (head==NULL)
    {
        nptr->next=NULL;
        head=nptr;
    }

    else{
        temp=head;
        while (temp->next!= NULL){
            temp =temp->next;
        }

      temp->next=nptr;
      nptr->next=NULL;
    }
}



void display()
{
    struct node *temp;

    if(head==NULL)
    {

        printf("Link List is empty");
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

void insertspecifedposition()
{
    int n,p,count;
    count=0;
    printf("Enter Node after:");
    scanf("%d", &p);
    printf("\nEnter number: ");
    scanf("%d", &n);

    struct node *temp,*currentnode,*temp1;
    struct node *nptr = (node *)malloc(sizeof(struct node));
    nptr->data = n;


   temp=head;
   while (temp->next!= NULL)
    {
       count=count+1;
        if(count==p){
            currentnode=temp;
            temp1=temp->next;
            currentnode->next=nptr;
            nptr->next=temp1;
        }
        temp =temp->next;
    }
}
