#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
    int n,i,*ptr;
    int sum = 0;
    float average ;
    clrscr();
     
    printf("Enter size of an array :");
    scanf("%d",&n);

    ptr = (int*)malloc(n*sizeof(int));

    for(i = 0; i<n; i++){
        printf("Enter elements %d:",i);
        scanf("%d\n",(ptr+i));
    }

    printf("Entered elements :");
    for(i = 0; i<n; i++){
        printf("%d\n",*(ptr+i));
    }
    for(i = 0; i<n; i++){
        sum += *(ptr+i);
    }

    average = sum/n;

    printf("the sum of array is : %d",sum);
    printf("\n");
    printf("The average is %f",average);

    free(ptr);
    return 0;

}
