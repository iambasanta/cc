// nfa acepting string "00" or "11"
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
                if(str[i]=='0') {
                    f ='b';

                } 
                else if (str[i] == '1'){
                    f='d';
                }
                break;
            case 'b':
                if(str[i] == '0'){
                    f='c';
                }
                else{
                    f='a';
                }
                break;
            case 'c':
                if(str[i] == '0' || str[i]=='1'){
                    f='c';
                }
                break;
            case 'd':
                if(str[i] == '1'){
                    f ='c';
                } 
                else{
                    f='a';
                }
                break;

            default:
                break;
        }
    }
    if (f=='c'){
        printf("Given string %s is accepted.\n", str);
    }
    else{
        printf("Given string %s is not accepted.\n", str);
    }
    return 0;
}
