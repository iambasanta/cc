#include<stdio.h>
#include<conio.h>
int main(){
        int i,j;
        int m[4][4];

        printf("Enter elements of 4*4 matrix :");
        for(i = 0; i<4; i++){
            for(j=0; j<4; j++){
                scanf("%d",&m[i][j]);
            }
        }
        for(i = 0; i<4; i++){
            for(j=0; j<4; j++){
                printf("%d",m[i][j]);
            }
        }
        for(i = 0; i<4; i++){

            for(j=0; j<4; j++){
                if(i == j){
                    if(m[i][j] == 0){
                    printf("diagonals are 0.");
                    }
                    else{
                    printf("Diagonals are not 0.");
                    }
                }
            }
            
        }

return 0;
}
