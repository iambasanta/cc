#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    printf("Enter number n :");
    scanf("%d",&n);
    bool isPrime=true;
    clrscr();

    for(int i = 2; i*i<=n; i++){

        if(n%i ==0){
            isPrime = false;
            break;
        }
    }
    if(n<2){
        isPrime=false;
    }
    printf("%d is prime ?\n",n);
    if(isPrime == true){
        printf("Yes,%d is prime.\n",n);
    }else{
        printf("No,%d is not prime.\n",n);
    }
    return 0;
}
