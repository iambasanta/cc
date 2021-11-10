#include<stdio.h>
#include<conio.h>
int main(){
    int matrix[3][2] ;
    int i,j;
    clrscr();
    //taking input.
    printf("Enter elements for 3*2 matrix :");
    for(i = 0; i<3; i++){
        for(j = 0; j<2; j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    //output
    for(i = 0; i<3; i++){
    int sum = 0;

        for(j = 0; j<2; j++){
            sum = sum+matrix[i][j];
        }
        printf("the sum of rows %d: %d\n",i+1,sum);
    }
    getch();
}
