#include<stdio.h>
#include<stdlib.h>

struct stack{
    int top,size;
    int *arr;
};

int isFull(struct stack *s){
    if(s->top == s->size-1){
        return 1;
    }
    return 0;
}

int isEmpty(struct stack *s){
    if(s->top == -1){
        return 1;
    }
    return 0;
}

void push(struct stack *s, int element){
    if(isFull(s)){
        printf("Stack is full!");
    }else{
        s->arr[s->top] = element;
        s->top++;
    }
}

int pop(struct stack *s){
    int a = -1;
    if(isEmpty(s)){
        printf("Stack is empty!");
    }else{
        s->top--;
        a = s->arr[s->top];
    }
    return a;
}

int main(){
    struct stack s;
    s.top = -1;
    s.size = 100;
    s.arr = (int*) malloc(s.size*sizeof(int));

    int i = 0;

    int visited[7] = {0,0,0,0,0,0,0};

    int a[7][7] = {
        {1,1,1,0,0,0,0},
        {1,1,0,1,1,0,0},
        {1,1,1,0,0,1,0},
        {0,1,0,1,0,0,1},
        {0,1,0,0,1,0,0},
        {0,0,1,0,0,1,0},
        {0,0,0,1,0,0,1},
    };

    printf("%d",i);
    visited[i] = 1;

    push(&s,i);

    while(!isEmpty(&s)){
        i = pop(&s);
        int j;
        for(j = 0; j < 7; j++){
            if(a[i][j] == 1 && visited[j] == 0 ){
                printf(" %d ",j);
                visited[j] = 1;
                push(&s,j);
            }
        }
    }


    return 0;
}
