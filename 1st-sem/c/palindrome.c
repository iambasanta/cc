#include<stdio.h>
#include<conio.h>
int main(){
    int n,num,digit,reversed=0;
    printf("Enter number to check :");
    scanf("%d",&n);
    clrscr();

    num = n;
    while(n!=0){
        digit = num % 10;
        reversed = (reversed*10)+digit;
        n= n/10;
    }
    printf("The reversed number is  : %d\n",reversed);

    if(num == reversed){
        printf("The number %d is palindrome.",num);
    }
    else{
        printf("The number %d is not palindrome.",num);
    }

    return 0;
}
