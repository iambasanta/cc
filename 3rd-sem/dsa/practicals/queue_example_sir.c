#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 100



struct queue
{
    int item[MAX];
    int rear;
    int font;
};
typedef struct queue st;



void enqueue(st*, int);
int dequeue(st*);
void display(st*);



int main()
{
    int dta, ch, x;
    st *s;
    //clrscr();
    s->rear=-1;
    s->font=0;
    printf("\n**************menu for program*************:\n");
    printf("1:Enter Item in Queue\n2:Delete Item from Queue\n3:display\n4:exit\n");
    do
    {
        printf("\nEnter yout choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("Enter data to be inserted\n");
                scanf("%d",&dta);
                enqueue(s,dta);
                break;
            case 2:
                x=dequeue(s);
                printf("\nDeleted item is:");
                printf("%d\n",x);
                break;
            case 3:
                display(s);
                break;
            default:
                exit(1);
        }
    }
    while(ch<4);
    getch();
}



/*******Enter function**************/
void enqueue(st *s,int d)
{
    if(s->rear==MAX-1)
    {
        printf("Queue is full\n");
    }
    else
    {
        s->rear++;
        s->item[s->rear]=d;

    }
}
/***********delete function**************/
int dequeue(st *s)
{
    int itm;
    if(s->rear==-1)
    {
        printf("Queue is empty\n");
        return(0);
    }
    else
    {
        itm=s->item[s->font];

        if(s->rear==s->font)
        {

            s->rear=-1;
            s->font=0;

        }
        else
        {
            s->font++;
        }

    }
    return(itm);




}



/*************display function********************/
void display(st *s)
{
    int i;
    if(s->rear==-1)
    {
        printf("There is no data item to display\n");
    }
    else
    {
        for(i=s->font; i<=s->rear; i++)
        {
            printf("%d\n", s->item[i]);
        }
    }
}

