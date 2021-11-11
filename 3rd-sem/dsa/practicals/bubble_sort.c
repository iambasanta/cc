// WAP to sort an array using bubble sort
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

    int iterator = 1;
    while(iterator < n){
        for(int i = 0; i<n-iterator; i++){
          if(array[i] > array[i+1]){
              int temp = array[i];
              array[i] = array[i+1];
              array[i+1] = temp;
          }
        }
        iterator ++;
    }

    printf("Sorted array :\n");
    for(int i = 0; i<n; i++){
        printf("%d ",array[i]);
    }

    return 0;
}
