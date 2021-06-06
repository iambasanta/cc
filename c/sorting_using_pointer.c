#include<stdio.h>
#include<conio.h>
int main(){
    int array[10],i,j,n;
    int temp;
    int *p = &array[0];
    clrscr();

    printf("Enter an size of an array :");
    scanf("%d",&n);

    printf("Enter elements fo an array :");
    for(i = 0; i<n; i++){
        scanf("%d",(p+i));
    }
    
    printf("Entered elements of array :");
    for(i = 0; i<n; i++){
        printf("%d\t",*(p+i));
    }

    //sorting

    for(i = 0; i<n-1; i++){
        for(j =0; j<n-1-i; j++){
            if(*(p+j)>*(p+(j+1))){
                temp = *(p+j);
                *(p+j) = *(p+(j+1));
                *(p+(j+1)) = temp;
            }
        }

    }
    printf("\n sorted array :");
    for(i = 0; i<n; i++){
        printf("%d\t",*(p+i));
    }
    getch();


    return 0;
}
