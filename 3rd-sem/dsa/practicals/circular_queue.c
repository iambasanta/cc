
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define SIZE 5
int size;

// Defining the queue structure
 struct queue
    {
    int items[SIZE];
	int f;
	int r;    
        
    };

// Initializing the queue
void init_que(struct queue *q) 
    {
       q->f = -1;
       q->r = -1;
    }

// Entering the elements into queue
void qin(struct queue *q, int n)
{
   if (q->f == ((q->r) + 1) % SIZE ){
      printf("\nQueue is Full.");
      return;
   }
   else{
    if(q->f == -1){
	q->f=0;
	}
    //items[r] = value;
    q->r=(((q->r)+1)%SIZE);
    //printf("%d", q->r);
    q->items[q->r]=n;
    printf("\nInserted -> %d", n);
  }
}

//Deleting an element from the stack.
int qout(struct queue *q)
{
   int n;
   if (q->f == -1) 
   {
      printf("\nQueue is empty.");
      return 0;
   }
   else{
      n = q->items[q->f];
   if(q->f==q->r){
   	init_que(q);
	   //q->f=-1;
   	//q->r=-1;
   }
   else{
    q->f=((q->f)+1)%SIZE;
    }
    return n;
}}

void display(struct queue *q){
   int i;
   if(q->f > q->r){
      for(i = q->f; i < SIZE; i++){
         printf("%d\n", q->items[i]);
      }
      for(i = 0; i <= q->r; i++){
         printf("%d\n", q->items[i]);
      }
   }
   else{
      for(i = q->f; i < SIZE; i++){
         printf("%d\n", q->items[i]);
      }
   }
}

int main() 
    {
      int element, opt, val;
      struct queue ptr;
      init_que(&ptr);
      printf("\nEnter Queue Size :");
      scanf("%d", &size);
   
	while (1) 
        {
      printf("\n\nSTACK PRIMITIVE OPERATIONS");
      printf("\n1.Queue In");
      printf("\n2.Queue Out");
      printf("\n3.DISPLAY");
      printf("\n4.QUIT");
      printf("\n");
      printf("\nEnter your option : ");
      scanf("%d", &opt);
      switch (opt)
      {
      case 1:
         printf("\nEnter the element into queue:");
         scanf("%d", &val);
         qin(&ptr, val);
         break;
      case 2:
         element = qout(&ptr);
         printf("\nThe element removed from queue is : %d", element);
         break;
      case 3:
         printf("\nThe current stack elements are: \n");
         display(&ptr);
         break;
      case 4:
         exit(0);
      default:
         printf("\nEnter correct option!Try again.");
      }
   }
  return 0;
  
  
}
