   #include<stdio.h>
    #include<conio.h>
    #include<stdlib.h>
    #define MAX 5

 

    struct queue
    {
        int item[MAX];
        int rear;
        int front;
    };
    typedef struct queue st;

 

    void enqueue(st*, int);
    int dequeue(st*);
    void display(st*);

 

    int main()
    {
    int dta, ch, x;
    st *s;
     
    s->rear=-1;
    s->front=-1;
    printf("\n**************menu for program*************:\n");
    printf("1:Enter Item in Circular Queue Queue\n2:Delete Item from Queue\n3:display\n4:exit\n");
    do
    {
    printf("\nEnter yout choice\n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        printf("Enter data to be inserted\n");
        scanf("%d",&dta);
        enqueue(s,dta);
        break;
    case 2:
        x=dequeue(s);
        printf("\nDeleted item is:");
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

 


    
    
    /*******Enter function**************/

 

 

    void enqueue(st *s,int d)
        {
            if(s->front==((s->rear+1)%MAX))
            {
            printf("Queue is full\n");
            }
            
            else
            {
                if(s->front==-1)
            
                {
                
                    s->rear=0;
                    s->front=0;
                }
            
                else
                    {
                        s->rear=(s->rear+1)%MAX;
                    }
                        
                s->item[s->rear]=d;
            
            
        
            
            }
            }
        /***********delete function**************/
        
        
        
        
        
            int dequeue(st *s)
                {
                int itm;
                if(s->front==-1)
                {
                    printf("Queue is empty\n");
                    return(0);
                }
                else
                    {
                    itm=s->item[s->front];
                    
                    if(s->rear==s->front)
                      {
                          
                          s->rear=-1;
                        s->front=0;
                      
                      }
                    else
                    {
                        s->front=(s->front+1)%MAX;
                    }
                    
                    }
                    return(itm);
                    
                    printf("%d%d",s->rear,s->front);    
                    
                    
                }
/************display function********************/
                
                
                void display(st *s)
                    {
                        int i;
                    if(s->front==-1)
                     {
                      printf("There is no data item to display\n");
                        }
                        else
                        {
                    
                      if(s->front< s->rear)
                       {
                           
                       
                              for(i=s->front; i<=s->rear; i++)
                            {
                            printf("%d\n", s->item[i]);
                            }
                        }
                        else
                           {
                              for(i=s->front; i<=MAX-1; i++)
                            {
                            printf("%d\n", s->item[i]);
                            }    
                       
                          for(i=0; i<=s->rear; i++)
                            {
                            printf("%d\n", s->item[i]);
                            }
                       
                           }
                       
                           }
                            
                    
                    
                    } 
