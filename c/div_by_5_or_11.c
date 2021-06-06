#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    clrscr();
    printf("Enter your number to check : ");
    scanf("%d",&n);
    if(n%5 == 0 || n%11 == 0){
    printf("The number is exactly divisible.");
    }else{
    printf("The numbr is not divisible by any number.");
    }
    getch();
    return 0;
}
