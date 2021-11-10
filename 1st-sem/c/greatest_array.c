#include<stdio.h>
int main()
{
    int i,greatest,smallest;
    int n[10];
    printf("Enter numbers :");
    for(i = 0; i<10; i++){
        scanf("%d",&n[i]);
    }
    greatest = n[0];
    smallest = n[0];
    for(i = 0; i<10; i++){
        if(greatest<n[i]){
            greatest = n[i];
        }else if(smallest>n[i]){
        smallest = n[i];
        }
    }
    printf("Greatest is %d\n",greatest);
    printf("Smallest is %d\n",smallest);
}
