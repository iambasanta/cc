#include <stdio.h>
#include <stdlib.h>



struct node
{
    int data;
    struct node *next;
};



struct node *rear=NULL,*font=NULL; 



void display();
void enqueue(int);
void dequeue();



int main()
{
    int n, ch;
    do
    {
        printf("\n\nStack Menu\n1. Enter item \n2. Delete item\n3. Display\n0. Exit");
        printf("\nEnter Choice 0-3? : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
                printf("\nEnter number ");
                scanf("%d", &n);
                enqueue(n);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
        }
    }while (ch != 0);
}



void enqueue(int item)
{
    struct node *nptr =(node*) malloc(sizeof(struct node));
    nptr->data = item;

    if ((font==NULL)&&(rear==NULL))
    {
        font=nptr;



        rear=nptr;
        nptr->next=NULL;

    }
    else
    {
        rear->next = nptr;
        nptr->next=NULL;
        rear = nptr;

    }
}



void display()
{
    struct node *temp;
    temp = font;
    while (temp != NULL)
    {
        printf("\n%d", temp->data);
        temp =temp->next;
    }
}



void dequeue()
{
    if (font== NULL)
    {
        printf("\n\nqueue is empty ");
    }
    else
    {
        struct node *temp;
        temp = font;
        font= font->next;
        printf("\n\n%d deleted", temp->data);
        free(temp);
    }
}
