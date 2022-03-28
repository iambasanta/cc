#include<stdio.h>
#define max 100

int main(){
    char str[max],c,f='a';
    int i;

    printf("\nStates: a-initial state, b, c, d-final state");

    do{
        printf("\nEnter the string to check :");
        scanf("%s",str);

        for(i = 0; str[i] != '\0';i++){
            switch(f){
                case 'a':
                    if(str[i] == 'a')
                        f = 'b';
                    else if(str[i] == 'b')
                        f = 'a';
                    break;
                case 'b':
                    if(str[i] == 'a')
                        f = 'b';
                    else if(str[i] == 'b')
                        f = 'c';
                    break;
                case 'c':
                    if(str[i] == 'a')
                        f = 'b';
                    else if(str[i] == 'b')
                        f = 'd';
                    break;
                case 'd':
                    if(str[i] == 'a')
                        f = 'b';
                    else if(str[i] == 'b')
                        f = 'a';
                    break;
            }
        }

        if(f == 'd'){
            printf("\nString accepted, %c is a final state.",f);
        }else{
            printf("\nString is not accepted, %c is not a final state.",f);
        }

        printf("\nDo you want to continue?(y/n):");
        scanf("%s",&c);

    }while(c == 'Y' || c == 'y');

    return 0;
}
