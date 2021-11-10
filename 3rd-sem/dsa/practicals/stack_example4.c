#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 100

struct stack
{
		int item[MAX];
		int tos;
};
typedef struct stack st;
void push(st*, int);
int pop(st*);
void display(st*);
int main(){
	int dta, ch, x;
	st *s;
	//clrscr();
	s->tos=-1;
	printf("\n**************menu for program*************:\n");
	printf("1:push\n2:pop\n3:display\n4:exit\n");
	do
	{
	printf("\nEnter yout choice\n");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
		printf("Enter data to be inserted\n");
		scanf("%d",&dta);
		push(s,dta);
		break;
	case 2:
		x=pop(s);
		printf("\npoped item is:");
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

	/*******push function**************/
	void push(st *s,int d){
			if(s->tos==MAX-1)
			{
				printf("Stack is full\n");
			}
			else
			{
				++s->tos;
				s->item[s->tos]=d;
			}
	}
		/***********pop function**************/
		int pop(st *s){
				int itm;
				if(s->tos==-1){
					printf("Stack is empty\n");
					return(0);
				}
				else{
					itm=s->item[s->tos];
					s->tos--;
					return(itm);
				}
		}

		/*************display function********************/
		void display(st *s){
				int i;
				if(s->tos==-1){
					  printf("There is no data item to display\n");
				}else{
					for(i=s->tos; i>=0; i--)
						{
							printf("%d\n", s->item[i]);
						}
					}
		}
					
