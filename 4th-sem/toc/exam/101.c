#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 100

int main(){
    char str[max],f='a',ch;

    int i;

    do{
        printf("Enter the string : ");
        scanf(" %s",str);

        for(i=0;str[i]!='\0';i++){
            switch(f){
                case 'a':
                    if(str[i]=='1'){
                        f='b';
                    }else if(str[i]=='0'){
                        f='a';
                    }
                    break;
                case 'b':
                    if(str[i]=='1'){
                        f='b';
                    }else if(str[i]=='0'){
                        f='c';
                    }
                    break;
                case 'c':
                    if(str[i]=='1'){
                        f='d';
                    }else if(str[i]=='0'){
                        f='a';
                    }
                    break;
                case 'd':
                    if(str[i]=='1'){
                        f='b';
                    }else if(str[i]=='0'){
                        f='a';
                    }
                    break;
                default:
                    break;
            }

        }

        if(f=='d')
        {
            printf("The string is accepted.\n");
        }else{
            printf("The string is not accepted.\n");
        }

        printf("Do you want to continue ?(Y/N) : ");
        scanf(" %s",&ch);

        f='a';
    }
    while(ch=='y' || ch=='Y');

}

