#include<stdio.h>

int sum(int n){
    if(n == 1){
        return 1;
    }else{
        return n+sum(n-1);
    }
}

int main(){
    int n,total;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    total = sum(n);
    printf("%d is the sum of %d natural numbers.",total,n);
    return 0;
}
