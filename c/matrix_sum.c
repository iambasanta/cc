#include<stdio.h>
#include<conio.h>
void sum_array(int m[3][3],int n[3][3]);
int main(){
    int m[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int n[3][3] = {{10,20,30},{40,50,60},{70,80,90}};

    sum_array(m,n);
return 0;
}
void sum_array(int m[3][3],int n[3][3]){
    int sum[3][3];
    int i,j;
    for(i = 0; i<3; i++){
         for(j = 0; j<3; j++){
             sum[i][j] = m[i][j]+n[i][j];
         }
    }
    for(i = 0; i<3; i++){
         for(j = 0; j<3; j++){
             printf("%d",sum[i][j]);
         }
         printf("\n");
    }
    
}
