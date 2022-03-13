#include<stdio.h>
#include<stdlib.h>
int  main(){
    int n,s;

    int *array;

    printf("enter size of an array : ");
    scanf("%d",&n);
    s = n;

    array = (int *)calloc(n,sizeof(int));

    if(array == NULL){
        printf("Memory is not allocated.");
        exit(0);
    }

    printf("\nEnter elements  ..\n");
    for(int i = 0; i<n; i++){
        scanf("%d",array+i);
    }

    printf("\nArray elements before resizing : \n");
    for(int i = 0; i<n; i++){
        printf("%d, ",*(array+i));
    }

    printf("\nEnter new size of an array : ");
    scanf("%d",&n);

    array = (int*)realloc(array, n * sizeof(int));

    printf("\nEnter new  elements ..\n");
    for(int i = s; i<n; i++){
        scanf("%d",(array+i));
    }

    printf("\nArray with newly added elements : \n");
    for(int i = 0; i<n; i++){
        printf("%d, ",*(array+i));
    }

    return 0;
}
