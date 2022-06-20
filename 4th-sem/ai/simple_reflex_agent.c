#include<stdio.h>

int main(){
    int temp = 0; //temperature of the room
    int distance = 0; // distance of car from the home
    printf("Enter the temperature of the room : ");
    scanf("%d",&temp);

    printf("Enter the distance of car from home : ");
    scanf("%d",&distance);

    if(temp > 25 && distance <= 200){
        printf("\nStart the Ac.\n");
    }else if(temp >= 25 && distance > 200){
        printf("\nCan't start the AC yet !\n");
    }else{
        printf("\nAc is not needed.\n");
    }
    return 0;
}
