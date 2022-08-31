//Construct a DFA over {0,1} that accepts a set of all strings ending with '00'. 

#include<stdio.h>
#include<stdlib.h>
#define max 100
int main(){
    char c, str[max];
    int i;
    char f ='a';

    printf("The final state is : q2 = c \n");
    printf("The initial states are : q0 = a,q1 = b ");
    do{
        printf("\nEnter the string :");
        scanf("%s",str);
        for(i=0;str[i]!='\0';i++){
            switch(f){
                case 'a':
                    if (str[i]=='0')
                    {
                        f='a';
                    }else if(str[i]=='1'){
                        f='b';
                    }
                    break;
                case 'b':
                    if (str[i]=='0'){
                        f='a';
                    }else if(str[i]=='1'){
                        f='c';
                    }
                    break;
                case 'c':
                    if(str[i]=='0'){
                        f='a';
                    }else if(str[i]=='1'){
                        f='c';
                    }
                    break;
            }
        }

        if(f=='c'){
            printf("string is accepted on final state %c at the end.",f);

        }else{
            printf("string is not accepted on final state %c at the end.",f);
        }

        printf("\nDo you want to continue ? (y/n)");
        scanf("%s",&c);

    }while(c=='y'||c=='Y');

    return 0;
}

