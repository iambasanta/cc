#include <stdio.h>
int main(){
    double num1,num2,num3;
printf("Enter your first number : ");
scanf("%lf",&num1);
printf("Enter your second number : ");
scanf("%lf",&num2);
printf("Enter your third number : ");
scanf("%lf",&num3);

if(num1 <= num2 && num1 <= num3){
printf("%f is smallest.",num1);
}else{
    if( num2 < num1 && num2 < num3){
        printf("%f is smallest.",num2);
    }
    else{
    printf("%f is smallest.",num3);
    }
}
return 0;
}
