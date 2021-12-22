#include<stdio.h>
   
int main(){
    int i,j,n;

    printf("Enter no of elements: ");
    scanf("%d",&n);
    int array[n];

    printf("Enter array elements:\n");
    for(i = 0; i<n; i++){
        printf("Enter %d'th element : ",i+1);
        scanf("%d",&array[i]);
    }

    for(i = 0; i < n-1; i++){
        for(j = i+1; j<n; j++){
            if(array[j]< array[i]){
                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }

    printf("Sorted array : \n");
    for(i = 0; i<n; i++){
        printf("%d ",array[i]);
    }

    return 0;
}
