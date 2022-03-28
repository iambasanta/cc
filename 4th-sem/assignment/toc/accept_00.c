#include<stdio.h>
#define max 100

int main(){
    char str[max],c,f='a';
    int i;

    printf("\nStates: a-initial state,b,c-final state");

    do{
        printf("\nEnter the string to check :");
        scanf("%s",str);

        for(i = 0; str[i] != '\0';i++){
            switch(f){
                case 'a':
                    if(str[i] == '0')
                        f = 'b';
                    else if(str[i] == '1')
                        f = 'a';
                    break;
                case 'b':
                    if(str[i] == '0')
                        f = 'c';
                    else if(str[i] == '1')
                        f = 'a';
                    break;
                case 'c':
                    if(str[i] == '0')
                        f = 'c';
                    else if(str[i] == '1')
                        f = 'a';
                    break;
            }
        }

        if(f == 'c'){
            printf("\nString accepted, %c is a final state.",f);
        }else{
            printf("\nString is not accepted, %c is not a final state.",f);
        }

        printf("\nDo you want to continue?(y/n):");
        scanf("%s",&c);

    }while(c == 'Y' || c == 'y');

    return 0;
}
