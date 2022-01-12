/* WAP to check a number is prime number or not by using recursion
 * [a prime number is a natural number greater than 1 that has no positive divisors other than 1 or itself. eg: 2,3,5,7...]
*/

#include<stdio.h>

int isPrime(int x,int y){
   if(y ==1){
       return 1;
   }else{
       if(x%y == 0){
           return 0;
       }else{
           isPrime(x,y);
       }
   }
}

int main(){
    int n,prime;
    printf("Enter number to check : ");
    scanf("%d",&n);
    if(n == 0 || n == 1){
        printf("%d is not prime number.",n);
    }else{
        prime = isPrime(n,n/2);
        if(prime == 1){
            printf("\n %d is a prime number.",n);
        }else{
            printf("\n %d is not a prime number.",n);
        }
    }
    return 0;
}
