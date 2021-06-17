//wap to find sum and average of all elements fo an array using malloc
#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,*array,sum=0;
    float average = 0; 

    printf("Enter number of elements : ");
    scanf("%d",&n);

    array = (int *) malloc(n*sizeof(int));

    if(array == NULL ){
        printf("Error ! memory not allocated.");
        exit(0);
    }

    printf("Enter elements of an array :\n");
    for(int i = 0; i<n; i++){
        printf("Entre element %d:",(i+1));
        scanf("%d",array + i);
        sum += *(array+i);
    }

    printf("sum = %d\n",sum);
    printf("average = %f\n",(float)sum/n);

    free(array);

    return 0;
}
