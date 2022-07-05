// this program is to accept the string that have a substring "1001" or "0110"
#include<stdio.h>
#define MAX 100

int main(){
    char str[MAX], f= 'a';
    int i;
    printf("Enter the string to checke acceptance : ");
    scanf("%s", str);
    for (i =0;str[i]!= '\0'; i++){
        switch (f)
        {
            case 'a':
                if(str[i]=='1') {
                    f ='f';

                } 
                else if(str[i]=='0'){
                    f='b';
                }
                else {
                    f='a';
                };
                break;
            case 'b':
                if(str[i] == '1'){
                    f='c';
                }
                else{
                    f='b';
                }
                break;
            case 'c':
                if(str[i] == '1'){
                    f='d';
                }
                else{
                    f='g';
                }
                break;
            case 'd':
                if(str[i] == '0'){
                    f='e';
                }
                else{
                    f='a';
                }
                break;
            case 'f':
                if(str[i] == '0'){
                    f='g';
                }
                else{
                    f='f';
                }
                break;
            case 'g':
                if(str[i] == '0'){
                    f='h';
                }
                else{
                    f='c';
                }
                break;
            case 'h':
                if(str[i] == '1'){
                    f='e';
                }
                else{
                    f='a';
                }
                break;
            case 'e':{
                         if(str[i] == '0'|| str[i] == '1'){
                             f ='e';
                         } 
                         break;
                     }
            default:
                     break;
        }
    }
    if (f=='e'){
        printf("Given string %s is accepted.\n", str);
    }
    else{
        printf("Given string %s is not accepted.\n", str);
    }
    return 0;
}
