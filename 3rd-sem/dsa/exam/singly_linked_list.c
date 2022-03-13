#include<stdio.h>
#include<stdlib.h>  

struct node {
    int data;
    struct node *next;
};

struct node *head;

void insert_at_beginning();
void insert_at_last();
void insert_at_specified_position();
void delete_from_beginning();
void delete_from_last();
void delete_after_specified();
void display();
void search();
void update_element();

int main(){
    int choice = 0;
    while(choice != 10){
        printf("\n ==== OPERATION MENU =====");
        printf("\n1.Insert at beginnig\n2.Insert at last\n3.Insert at any random location\n4.Delete from Beginning\n5.Delete from last\n6.Delete node after specified location\n7.Search for an element\n8.Display Elements\n9.Update element\n10.Exit");
        printf("\nEnter your choice :");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                insert_at_beginning();
                break;
            case 2:
                insert_at_last();
                break;
            case 3:
                insert_at_specified_position();
                break;
            case 4:
                delete_from_beginning();
                break;
            case 5:
                delete_from_last();
                break;
            case 6:
                delete_after_specified();
                break;
            case 7:
                search();
                break;
            case 8:
                display();
                break;
            case 9:
                update_element();
                break;
            case 10:
                exit(0);
                break;

            default:
                printf("\nPlease enter valid operation.");
        }
    }
    return 0;
}

void insert_at_beginning(){
    struct node *ptr;
    int item;
    ptr = (struct node *) malloc(sizeof(struct node *));

    if(ptr == NULL){
        printf("\nEmpty List.");
    }else{
        printf("Enter value: ");
        scanf("%d",&item);
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        printf("\n Element inserted at beginnig.");
    }
}

void insert_at_last(){
    struct node *ptr, *temp;
    int item;
    ptr = (struct node*)malloc(sizeof(struct node));
    if(ptr == NULL){
        printf("\nEmpty List.");
    }else{
        printf("\nEnter value :");
        scanf("%d",&item);
        ptr->data = item;
        if(head == NULL){
            ptr->next = NULL;
            head = ptr;
            printf("\n Element inserted at last.");
        }else{
            temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = NULL;
            printf("\n Element inserted at last.");
        }

    }
}

void insert_at_specified_position(){
    int i,loc,item;   
    struct node *ptr, *temp;  
    ptr = (struct node *) malloc (sizeof(struct node));  
    if(ptr == NULL){  
        printf("\nEmpty List.");
    }else{  
        printf("\nEnter value : ");  
        scanf("%d",&item);  
        ptr->data = item;  
        printf("\nEnter the location after which you want to insert:");  
        scanf("%d",&loc);  
        temp=head;  
        for(i=0;i<loc;i++){  
            temp = temp->next;  
            if(temp == NULL){  
                printf("\nCan't insert\n");  
                return;  
            }  
        }  
        ptr ->next = temp ->next;   
        temp ->next = ptr;   
        printf("\nNode inserted");  
    }  
}

void delete_from_beginning()  
{  
    struct node *ptr;  
    if(head == NULL)  
    {  
        printf("\nEmpty List.");  
    }  
    else   
    {  
        ptr = head;  
        head = ptr->next;  
        free(ptr);  
        printf("\nNode deleted from the begining ...\n");  
    }  
}  

void delete_from_last()  
{  
    struct node *ptr,*ptr1;  
    if(head == NULL)  
    {  
        printf("\nEmpty List.");  
    }  
    else if(head -> next == NULL)  
    {  
        head = NULL;  
        free(head);  
        printf("\nOnly node of the list deleted ...\n");  
    }  

    else  
    {  
        ptr = head;   
        while(ptr->next != NULL)  
        {  
            ptr1 = ptr;  
            ptr = ptr ->next;  
        }  
        ptr1->next = NULL;  
        free(ptr);  
        printf("\nDeleted Node from the last ...\n");  
    }     
}  

void delete_after_specified()  
{  
    struct node *ptr,*ptr1;  
    int loc,i;    
    printf("\n Enter the location of the node after which you want to perform deletion :\n");  
    scanf("%d",&loc);  
    ptr=head;  
    for(i=0;i<loc;i++)  
    {  
        ptr1 = ptr;       
        ptr = ptr->next;  

        if(ptr == NULL)  
        {  
            printf("\nCan't delete");  
            return;  
        }  
    }  
    ptr1 ->next = ptr ->next;  
    free(ptr);  
    printf("\nDeleted node %d ",loc+1);  
}  

void search()  
{  
    struct node *ptr;  
    int item,i=0,flag;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("\nEmpty List\n");  
    }  
    else  
    {   
        printf("\nEnter item which you want to search?\n");   
        scanf("%d",&item);  
        while (ptr!=NULL)  
        {  
            if(ptr->data == item)  
            {  
                printf("item found at location %d ",i+1);  
                flag=0;  
            }   
            else  
            {  
                flag=1;  
            }  
            i++;  
            ptr = ptr -> next;  
        }  
        if(flag==1)  
        {  
            printf("Item not found\n");  
        }  
    }     

}  

void display()  
{  
    struct node *ptr;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("\nEmpty List.");  
    }  
    else  
    {  
        printf("\nPrinting elements . . . . .\n");   
        while (ptr!=NULL)  
        {  
            printf("%d\n",ptr->data);  
            ptr = ptr -> next;  
        }  
    }  
}     

void update_element(){
    struct node *ptr,*temp;
    int elementToBeUpdated,newValue;
    printf("\nEnter an element to update:");
    scanf("%d",&elementToBeUpdated);

    printf("\nEnter a new value:");
    scanf("%d",&newValue);

    if(ptr == NULL){
        printf("\nEmpty List.");
    }else{
        temp = head;
        while(temp != NULL){
            if(temp->data == elementToBeUpdated){
                temp->data = newValue;
                break;
            }
            temp= temp->next;
        }
    }
}
