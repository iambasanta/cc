#include<stdio.h>
#include<stdlib.h>
#define max 10

void push();
int pop();
void traverse();

int stack[max];

int top = -1;

int main(){
    int operation;
    char decision;
    do{
        printf("\n 1 to PUSH");
        printf("\n 2 to POP");
        printf("\n 3 to TRAVERSE");

        printf("\nEnter the operation you want to perform :");
        scanf("%d",&operation);

        switch(operation){
            case 1: push();
                    break;
            case 2: printf("\n The deleted element is : %d",pop());
                    break;
            case 3: traverse();
                    break;
            default: printf("\nThe entered operation is invalid.");
        }

        printf("\n Do you want to continue ? (Y/N) :");
        scanf(" %c",&decision);

    }while(decision == 'Y' || decision == 'y');
    return 0;
}

void push(){
    int item;
    if(top == max-1){
        printf("\n Stack is full.");
        exit(0);
    }else{
        printf("\n Enter the element you want to insert : ");
        scanf("%d",&item);
        top = top +1;
        stack[top] = item;
    }
}

int pop(){
    int item;
    if(top == -1){
        printf("\n Stack is empty.");
        exit(0);
    }else{
        item = stack[top];
        top = top -1;
    }
    return item;
}

void traverse(){
 int i;
 if(top == -1){
     printf("\n Stack is empty.");
     exit(0);
 }else{
     for(i = top ; i>=0; i--){
         printf("\nTraversing through stack elements .");
         printf("\n %d",stack[i]);
     }
 }
}
