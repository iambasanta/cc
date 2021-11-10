#include <stdio.h>
#define max 5
void enqueue();
void dequeue();
void display();
int rear=-1, front=0, i[max];
int main(){
    int d;
    char c;
    do{
        printf("1. Enqueue\n2. Dequeue\n3. Display\nEnter your decision: ");
        scanf("%d",&d);
        switch(d){
            case 1:enqueue();
            break;
            case 2: dequeue();
            break;
            case 3: display();
            break;
            default: printf("You've entered invalid choice.\n");
        }
        printf("Press 'Y' to continue: ");
        scanf(" %c",&c);
    }while (c=='y'|| c=='Y');
    printf("\n\n\"I AM NOT A JOKE\" - Covid\n\n");
    return 0;
}
void enqueue(){
    if (rear<max-1){
        rear++;
        printf("\nEnter the no. to be entered in queue: ");
        scanf("%d",&i[rear]);
        printf("\n*_*\n");
    }
    else{
        printf("Queue Overflow\n");
    }
}
void dequeue(){
    if (rear==-1||front>rear) printf("Queue underflow.\n");
    else{
        front++;
        printf("Deleted item: %d\n",i[front-1]);
    }
}
void display(){
    if (rear==-1||front>rear) printf("Queue underflow.\n");
    else{
        for (int j=front;j<=rear;j++){
        printf("%d ",j[i]);
    }
    printf("\n");
    }
}
