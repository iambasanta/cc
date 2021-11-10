#include<stdio.h>
#include<conio.h>
int main(){
    int isPrime ;
    clrscr();
    printf("The prime numbers from 1 to 100 are:\n");

    for(int i = 1; i<=100; i++){
        isPrime = 0;
        for(int j = 2; j<i; j++){
           if(i%j == 0){
               isPrime ++;
               break;
           } 
        }
        if(isPrime == 0 && i!=1){
            printf(" %d,",i);
        }

    }

    return 0;
}
