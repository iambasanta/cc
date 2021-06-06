#include<stdio.h>
#include<conio.h>
int factorial(int);
int main(){
    int n;
    printf("Enter the number to calculate factorial :");
    scanf("%d",&n);
    printf("the factorial of %d is : %d",n,factorial(n));
    return 0;
}
int factorial(int x){
    if(x >=1){
        return x*factorial(x-1);
    }
    else{
        return 1;
    }
}
