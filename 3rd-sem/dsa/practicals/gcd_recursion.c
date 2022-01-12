#include<stdio.h>

int gcd(int m, int n){
    if(n == 0){
        return m;
    }else{
        return gcd(n,m%n);
    }

}

int main(){
    int n,m;
    printf("Enter two numbers :");
    scanf("%d%d",&m,&n);
    printf("GCD of %d and %d is %d",m,n,gcd(m,n));
    return 0;
}
