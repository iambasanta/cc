#include<stdio.h>

int main(){

    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);

    int array[n];
    printf("Enter array elements:\n");
    for(int i = 0; i<n; i++){
        printf("Enter %d'th element : ",i+1);
        scanf("%d",&array[i]);
    }

    for(int i = 1; i<n; i++){
        int temp  = array[i];
        int j = i-1;

        while(j >=0 && array[j] > temp){
            array[j+1] = array[j];
            j--;
        }

        array[j+1] = temp;
    }

    printf("Sorted array :\n");
    for(int i = 0; i<n; i++){
        printf("%d ",array[i]);
    }

    return 0;
}
