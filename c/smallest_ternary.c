#include<stdio.h>
#include<conio.h>
int main(){
    int a,b;
    int smallest;
    printf("Enter a and b :");
    scanf("%d%d",&a,&b);

    smallest = (a>b)?b:a;
    printf("The smallest is : %d",smallest);


return 0;
}
