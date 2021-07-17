// implementing dynamic queue
#include<stdio.h>
#include<stdlib.h>
#define MAX 100

struct queue{
    int element[MAX];
    int front;
    int rear;
};
typedef struct queue qe;

void enqueue(qe*,int);
int dequeue(qe*);
void traverse(qe*);

int main(){
    int choice,x,element;

    char decision;

    qe *q;

    q->rear = -1;
    q->front = 0;

    printf("\n-----------List of operations-----------\n");
    printf("\n 1: insert an element.\n");
    printf("\n 2: delete an element.\n");
    printf("\n 1: traverse .\n");

    do{
        printf("\n Enter the operation you want to perform on queue : ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Enter the queue element to insert : ");
                scanf("%d",&element);
                enqueue(q,element);
                break;
            case 2:
                x = dequeue(q);
               printf("The deleted data element is : " );
               printf("%d\n",x);
                break;
            case 3:
                traverse(q);
                break;
            default:
                printf("You shaddy person. Trying to perform wrong operation?");
                exit(1);
        }

        printf("\nDo you want to continue ? (Y/N) :");
        scanf(" %c",&decision);
    }while(decision == 'Y' || decision == 'y');

    return 0;
}

void enqueue(qe *q, int d){
    if(q->front == MAX-1){
        printf("\nQueue is full babes.\n");
    }else{
        q->rear++;
        q->front++;
        q->element[q->rear] = d;
    }
}

int dequeue(qe *q){
    int item;
    if(q->rear == -1){
        printf("\nQueue is empty babes.\n");
        return 0;
    }else{
        item = q->element[q->rear];
        q->rear--;
        q->front--;
        return(item);
    }
}

void traverse(qe *q){
    int i;
    if(q->rear == -1){
        printf("\nQueue is empty to traverse babes.\n");
    }else{
        for(i=q->rear;i>=0;i--){
            printf("%d\n",q->element[i]);
        }
    }
}
