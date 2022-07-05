// nfa accepting string that starts with "a" and ends with "b"
#include<stdio.h>

#define MAX 100

int main(){
    char str[MAX], f='a';
    int i;
    printf("Enter the string to check acceptance : ");
    scanf("%s",str);

    for(i = 0;str[i]!= '\0';i++){
        switch(f){
            case 'a':
                if(str[i] == 'a'){
                    f = 'b';
                }else{
                    f='d';
                }
                break;
            case 'b':
                if(str[i] == 'b'){
                    f = 'c';
                }else{
                    f='b';
                }
                break;
            case 'c':
                if(str[i] == 'b'){
                    f = 'c';
                }else{
                    f='b';
                }
                break;
            default:
                break;
        }
    }
    if(f == 'c'){
        printf("Given string %s is accepted.\n",str);
    }else{
        printf("Given string %s is not accepted.\n",str);
    }

    return 0;
}
