#include<stdio.h>
#include<conio.h>
int main(){
    int i, marks[4];
    int scored= 0;
    int total = 400;
    float percentage;
    clrscr();

    printf("Enter your marks in four subjects : ");
    for(i = 0; i<4;i++){
        scanf("%d",&marks[i]);
    }
    for(i = 0; i<4; i++){
        scored= scored+marks[i];
    }
    percentage = (float)scored/total*100;
    
    if(percentage >=80){
    printf("Distinction.");
    }else if(percentage >= 70 && percentage<80){
        printf("First Division.");
    }else if(percentage >= 50 && percentage<70){
        printf("Second Division.");
    }else if(percentage >= 40 && percentage<50){
        printf("Third Division.");
    }else {
        printf("Fail.");
    }

    getch();
return 0;
}
