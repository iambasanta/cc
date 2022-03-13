// single linked list
#include<stdio.h>
//#include<malloc.h> //for malloc function
#include<stdlib.h>  
// #include<conio.h>
// #include<process.h>

struct node
{
    int info;
    struct node *next;
};

typedef struct node NodeType;
NodeType *head = NULL;

void insert_atfirst(int);
void insert_givenposition(int);
void insert_atend(int);

void delet_first();
void delet_last();
void delet_nthnode();

void update_node(int,int);

void display_nodes();
void count_nodes();

int main(){
    int choice;
    int item,item2;
    do
    {
        printf("\n menu for program:\n");
        printf("1. insert first \n2.insert at given position \n3 insert at last \n 4:Delete first node\n 5:delete last node\n6:delete nth node\n7:count nodes\n8Display items \n 9 Update node\n10:exit\n");
        printf("enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter item to be inserted");
                scanf("%d", &item);
                insert_atfirst(item);
                break;
            case 2:
                printf("Enter item to be inserted");
                scanf("%d",&item);
                insert_givenposition(item);
                break;
            case 3:
                printf("Enter item to be inserted");
                scanf("%d", &item);
                insert_atend(item);
                break;
            case 4:
                delet_first();
                break;
            case 5:
                delet_last();
                break;
            case 6:
                delet_nthnode();
                break;
            case 7:
                display_nodes();
                break;
            case 8:
                count_nodes();
                break;
            case 9:
                printf("Enter item to update : ");
                scanf("%d",&item);
                printf("Enter the updated value : ");
                scanf("%d",&item2);

                update_node(item,item2);
            case 10:
                exit(1);
                break;
            default:
                printf("invalid choice\n");
                break;
        }
    }while(choice<11);

    return 0;
}
/************function definitions**************/
void insert_atfirst(int item)
{
    NodeType *nnode;
    nnode=(NodeType*)malloc(sizeof(NodeType));
    nnode->info=item;
    nnode->next=head;
    head=nnode;
}
void insert_givenposition(int item)
{
    NodeType *nnode;
    NodeType *temp;
    temp=head;
    int p,i;
    nnode=( NodeType *)malloc(sizeof(NodeType));
    nnode->info=item;
    if (head==NULL)
    {
        nnode->next=NULL;
        head=nnode;
    }
    else
    {
        printf("Enter Position of a node at which you want to insert an new node\n");
        scanf("%d",&p);
        for(i=1;i<p-1;i++)
        {
            temp=temp->next;
        }
        nnode->next=temp->next;
        temp->next=nnode;
    }
}
void insert_atend(int item)
{
    NodeType *nnode;
    NodeType *temp;
    temp=head;
    nnode=( NodeType *)malloc(sizeof(NodeType));
    nnode->info=item;
    if(head==NULL)
    {
        nnode->next=NULL;
        head=nnode;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        nnode->next=NULL;
        temp->next=nnode;
    }
}
void delet_first()
{
    NodeType *temp;
    if(head==NULL)
    {
        printf("Void deletion|n");
        return;
    }
    else
    {
        temp=head;
        head=head->next;
        free(temp);
    }
}
void delet_last()
{
    NodeType *hold,*temp;
    if(head==NULL)
    {
        printf("Void deletion|n");
        return;
    }
    else if(head->next==NULL)
    {
        hold=head;
        head=NULL;
        free(hold);
    }
    else
    {
        temp=head;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        hold=temp->next;
        temp->next=NULL;
        free(hold);
    }
}
void delet_nthnode()
{
    NodeType *hold,*temp;
    int pos, i;
    if(head==NULL)
    {
        printf("Void deletion|n");
        return;
    }
    else
    {
        temp=head;
        printf("Enter position of node which node is to be deleted\n");
        scanf("%d",&pos);
        for(i=1;i<pos-1;i++)
        {
            temp=temp->next;
        }
        hold=temp->next;
        temp->next=hold->next;
        free(hold);
    }
}
void display_nodes()
{
    NodeType *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d\t",temp->info);
        temp=temp->next;
    }
}
void count_nodes()
{
    int cnt=0;
    NodeType *temp;
    temp=head;
    while(temp!=NULL)
    {
        cnt++;
        temp=temp->next;
    }
    printf("total nodes=%d",cnt);
}


void update_node(int item1,int item2){
    NodeType *temp;
    if(head==NULL){
        printf("Empty list");
    }
    else{
        temp = head;
        while(temp!=NULL){
            if(temp->info == item1){
                temp->info = item2;
                break;
            }
            temp=temp->next;
        }
    }

}
