#include<stdio.h>
#include<conio.h>
int main(){
    int a =1;
    int b;
    for(int i = 1; i<=10; i++){
        b = a * a;
        a = a + 2;
        printf(" %d,",b);
    }
    return 0;
}

