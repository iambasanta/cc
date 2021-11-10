#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    printf("Enter size of an array : ");
    
    scanf("%d",&n);
    int integers[n];
    int *p = &integers[n];
    int temp;
    clrscr();

    printf("Enter elements of array :");
    for(int i = 0; i<n; i++){
        scanf("%d",(p+1));
    }


    for(int i = 0; i<n ; i++){
        printf("%d",*(p+1));

    }


    for(int i = 0; i<n-1;i++){
        for(int j=0; j<n-1-i;j++){
            if(*(p+1) < *(p+1+j)){
                temp = *(p+j);
                *(p+j) = *(p+1+j);
                *(p+j+1) = temp;
            }
        }
    }

    for(int i = 0;i<n; i++){
        printf("%d",*(p+1));
    }
    return 0;

}

