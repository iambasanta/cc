// nfa accepting string having substring "abb"
#include<stdio.h>
#define MAX 100

int main(){
    char str[MAX], f= 'a';
    int i;
    printf("Enter the string to check acceptance : ");
    scanf("%s", str);
    for (i =0;str[i]!= '\0'; i++){
        switch (f)
        {
        case 'a':
            if(str[i]=='b') {
                f ='a';

            } 
            else if(str[i]=='a'){
                f='b';
            }
            break;
        case 'b':
            if(str[i] == 'b'){
                f='c';
            }
            else{
                f='b';
            }
            break;
        case 'c':
            if(str[i] == 'b'){
                f='d';
            }
            else{
                f='c';
            }
            break;
        case 'd':{
            if(str[i] == 'a'|| str[i] == 'b'){
                f ='d';
            } 
            break;
        }
        default:
            break;
        }
    }
    if (f=='d'){
        printf("Given string %s is accepted.\n", str);
    }
    else{
        printf("Given string %s is not accepted.\n", str);
    }
    return 0;
}
