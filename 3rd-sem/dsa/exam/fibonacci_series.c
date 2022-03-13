#include<stdio.h>

/* int fibonacci(int n){ */
/*     if(n==1 || n==2){ */
/*         return 1; */
/*     }else{ */
/*         return fibonacci(n-1) + fibonacci(n-2); */
/*     } */
/* } */

int fibonacci(int n){
    if(n==1 || n==2){
        return 1;
    }else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(){
    int n,i;

    printf("Enter the number of terms :");
    scanf("%d",&n);

    printf("The first %d fibonacci numbers are :\n",n);

    for(i = 1; i<=n; i++){
        printf("%d ",fibonacci(i));
    }

    return 0;
}
