#include<stdio.h>
#define max 100


int main(){
    char str[max],f='a',ch;
    int i;

    do{
        printf("Enter the string : ");
        scanf("%s",str);

        for(i=0;str[i]!='\0';i++){
            switch(f){
                case 'a':
                    if(str[i]=='a'){
                        f='b';
                    }else if(str[i]=='b'){
                        f='a';
                    }
                    break;

                case 'b':
                    if(str[i]=='a'){
                        f='b';
                    }else if(str[i]=='b'){
                        f='c';
                    }
                    break;

                case 'c':
                    if(str[i]=='a'){
                        f='b';
                    }else if(str[i]=='b'){
                        f='d';
                    }
                    break;

                case 'd':
                    if(str[i]=='a' || str[i]=='b'){
                        f='d';
                    }
                    break;

                default:
                    break;
            }
        }

        if(f=='d')
        {
            printf("\nEntered string %s is accepted",str);
        }

        else
        {
            printf("\nEntered string %s is not accepted",str);
        }

        printf("\nDo you want to continue(Y/N) : ");
        scanf(" %c", &ch);
    }

    while(ch=='Y' || ch=='y');

    return 0;
}
