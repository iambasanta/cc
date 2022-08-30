//This program demonstrates the operations performend on Queue.
#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 10

void enqueue();
int  dequeue();
void traverse();
int queue[MAXSIZE];
int rear=-1;
int font=0;

int main()
{
    int choice;
    char ch;
    do
    {
        printf("\n 1 : ENQUEUE");
        printf("\n 2 : DEQUEUE");
        printf("\n 3 : TRAVERSE");
        printf("\nEnter your choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1: enqueue();
                break;
            case 2: printf("\nThe deleted element is :  %d",dequeue());
                break;
            case 3:traverse();
                break;
            default: printf("\nYou Entered Wrong Choice : ");
        }
        printf("\nDo You Wish To Continue (Y/N)");
        fflush(stdin);
        scanf(" %c",&ch);
    }
    while(ch=='Y' || ch=='y');
}

void enqueue()
{
    int item;
    if(rear == MAXSIZE -1)
    {
        printf("\nThe Queue Is Full");
        exit(0);
    }
else{
        printf("Enter the element to be inserted : ");
        scanf("%d",&item);
        rear = rear + 1;
        queue[rear] = item;
    }
}


int dequeue()
{
    int item;
    if(rear== -1)
    {
        printf("The Queue is Empty");
        exit(0);
    }
else{
        item = queue[font];
        if(rear==font){
            rear=-1;
            font=0;
        } else {
            font=font+1;
        }
    }    

    return(item);
}
void traverse(){
    int i;
    if(rear == -1){
        printf("The Queue is Empty");
        exit(0);
    }
else{
        printf("Traverse the element :");
        for(i = font;i<=rear;i++){
            printf("\n %d",queue[i]);
        }
    }
}
