//NFA ends with 101.
#include<stdio.h>
#include<string.h>
#define max 100

void checkNFA(char s[max])
{
    int i;
    int initial_state = 0;
    int previous_state = initial_state;
    int final_state;

    for(i=0;i<strlen(s);i++){
        if(previous_state == 0 && s[i] == '1'){
            final_state = 0;
        }else{
            final_state = 1;
        }

        if(previous_state == 0 && s[i] == '0'){
            final_state = 0;
        }

        if(previous_state == 0 && s[i] == '1')
        {
            final_state = 1;
        }

        if(previous_state == 1 && s[i] == '0')
        {
            final_state = 2;
        }

        if(previous_state == 2 && s[i] == '1')
        {
            final_state = 3;
        }

        previous_state = final_state;
    }

    if(final_state == 3){
        printf("Accepted");
    }else{
        printf("Not accepted");
    }
}


int main()
{
    char c;
    char s[max];

    do
    {
        printf("Enter the string : ");
        scanf("%s",s);
        checkNFA(s);
        printf("\nDo you want to continue ?(y/n) : ");
        scanf("%s",&c);
    }while(c=='y');

    return 0;
}

