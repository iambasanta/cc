#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 100
struct stack
{
	int item[max];
	int tos;
};
typedef struct stack st;
void push(st*, int);
int pop(st*);
void display(st*);
int main()
{
	int data, ch, x;
	st *s;
	s->tos=-1;
	printf("\n*********************** Menu For The Program ******************");
	printf("\n1. PUSH \n2.POP \n3.TRAVERSE \n4. QUIT");
	while (1)
	{
		printf("\nEnter your choice : ");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter the data to be inserted. ");
				scanf("%d", &data);
				push(s, data);
				break;
			case 2:
				printf("\nThe deleted item is : %d", pop(s));
				break;
			case 3:
				display(s);
				break;
			case 4:
				exit(0);
			default:
				printf("\nEnter the correct choice.");
		}	
	}	
}
void push(st *s, int d)
{
	if (s->tos==max-1)
	printf("\nThe stack is full. ");
	else
	{
		++s->tos;
		s->item[s->tos]=d;	
	}

}
int pop(st *s)
{
	int a;
	if(s->tos==-1)
	printf("\nThe stack is empty.");
	else
	{
		a=s->item[s->tos];
		s->item[s->tos]--;
		return a;	
	}
}
void display(st *s)
{
	int i;
	if (s->tos==-1)
	printf("\nThe stack is empty.");
	else
	{
		for (i=s->tos; i>=0; i--)
		printf("\n%d", s->item[i]);
	}

}
