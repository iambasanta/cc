// Construct DFA over {a,b} that contains 'aba' as substring.

#include <stdio.h>
#include <string.h>
#define max 100

void checkValidDFA(char s[max] ){
    int i;
    int initial_state = 0;
    int previous_state = initial_state;
    int final_state;

    for( i = 0; i < strlen(s); i++){	
        if((previous_state == 0 && s[i] == 'a') || (previous_state == 1 && s[i] == 'a')){
            final_state = 1;
        }
        if((previous_state == 0 && s[i] == 'b') || (previous_state == 2 && s[i] == 'b')){
            final_state = 0;
        }
        if(previous_state == 1 && s[i] == 'b'){
            final_state = 2;
        }
        if((previous_state == 2 && s[i] == 'a') || (previous_state == 3)){
            final_state = 3;
        }
        previous_state = final_state;
    }

    if(final_state == 3){
        printf("Accepted");
    }else{
        printf("Not Accepted");
    }
}

int main(){
    char c;
    char s[max];

    do
    {
        printf("Enter the string : ");
        scanf("%s",s);
        checkValidDFA(s);
        printf("\nDo you want to continue (y/n)? : ");
        scanf("%s",&c);
    }
    while(c=='y');
    return 0;
}

