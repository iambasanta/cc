#include<stdio.h>
#include<stdlib.h>
#define MAX 50

int size;

// Defining the stack structure
 struct stack 
    {
    int arr[MAX];
    int top;

        
        
    };

// Initializing the stack
// use arrow operator to point
void init_stk(struct stack *st) 
    {
       st->top = -1;
    }

// Entering the elements into stack
void push(struct stack *st, int numberx)
{
   if (st->top == size - 1)
   {
      printf("\nStack overflow(i.e., stack full).");
      return;
   }
   st->top++;
   st->arr[st->top] = numberx;
}

//Deleting an element from the stack.
int pop(struct stack *st)
{
   int numberx;
   if (st->top == -1) 
   {
      printf("\nStack underflow(i.e., stack empty).");
      return NULL;
   }
   numberx = st->arr[st->top];
   st->top--;
   return numberx;
}

void display(struct stack *st)
  {
   int i;
   for (i = st->top; i >= 0; i--)
      printf("\n%d", st->arr[i]);
 }

int main() 
    {
      int element, opt, val;
      struct stack ptr;
      init_stk(&ptr);
      printf("\nEnter Stack Size :");
      scanf("%d", &size);
   
	while (1) 
        {
      printf("\n\nSTACK PRIMITIVE OPERATIONS");
      printf("\n1.PUSH");
      printf("\n2.POP");
      printf("\n3.DISPLAY");
      printf("\n4.QUIT");
      printf("\n");
      printf("\nEnter your option : ");
      scanf("%d", &opt);
      switch (opt)
      {
      case 1:
         printf("\nEnter the element into stack:");
         scanf("%d", &val);
         push(&ptr, val);
         break;
      case 2:
         element = pop(&ptr);
         printf("\nThe element popped from stack is : %d", element);
         break;
      case 3:
         printf("\nThe current stack elements are:");
         display(&ptr);
         break;
      case 4:
         exit(0);
      default:
         printf("\nEnter correct option!Try again.");
      }

      return 0;
   }
  
  
}












