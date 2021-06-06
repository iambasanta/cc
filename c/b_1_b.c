#include<stdio.h>
#include<conio.h>
int main(){
    int n,num,digit,reversed =0;
    printf("Enter any positive number to check :");
    scanf("%d",&n);

    num = n;
    while(n!= 0){
        digit = num % 10;
        reversed = (reversed * 10)+digit;
        n= n/10;
    }
    printf("The reversed number of entered number is %d .\n",reversed);
    if(num == reversed){
        printf("The entered number is palindrome.");
    }
    else{
        printf("The entered numbers is not palindrome.");
    }
    
    return 0;
}
