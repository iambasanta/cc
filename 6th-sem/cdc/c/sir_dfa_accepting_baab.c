//for baab
#include<stdio.h>

void main(){
    char str[20],ch;
    int i=0;
    int state=0;
    printf("Enter a string:");
    // gets(str);
    scanf("%s",str);
    while(str[i]!='\0')
    {
        ch=str[i];
        i++;
        switch(state)
        {
            case 0:
                if(ch=='b')
                {
                    state=1;
                }
                else
                {
                    state=5;
                }
            break;
            case 1:
                if(ch=='a')
                {
                    state=2;	
                }
                else
                {
                    state=5;
                }
            break;
            case 2:
                if(ch=='a')
                {
                    state=3;
                }
                else
                {
                    state=5;
                }
            break;
            case 3:
                if(ch=='b')
                {
                    state=3;
                }
                else
                {
                    state=5;
                }
            break;
            case 5:
            break;
        }

    }
    if(state==3)
    {
        printf("The string is accepted\n");
    }
    else
    printf("The string is invalid\n");

}
