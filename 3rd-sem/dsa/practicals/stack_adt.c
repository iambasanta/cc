
#include<stdio.h>
#include<stack>

int main()
{
    stack<int> stk;
    if(stk.empty())
    {
        printf("Stack is empty" );
    } 
    else
    {
        printf("Stack is not empty" );
    }
    //insert elements into stack
    stk.push(10);
    stk.push(20);
    stk.push(30);
    stk.push(40);
    stk.push(50);
    printf("\nSize of the stack %ld: " ,stk.size());
    //pop and dispay elements
    while(!stk.empty())
    {
        int item = stk.top(); // same as peek operation
        stk.pop();
        printf("\n%d\n",item);
    }
}
