#include<stdio.h>
int main(){
    int n;
    printf("Enter size for array : ");
    scanf("%d",&n);
    int numbers[n];
    printf("Enter elements for array: ");
    int i,sum;
    float average;
    for(i = 0; i<n;i++){
        scanf("%d",&numbers[i]);
    }
    sum =0; 
    for(i=0; i<n; i++){
        sum+= numbers[i];
    }
    average = sum/n;

    printf("The sum is : %d\n",sum);
    printf("The average is: %f",average);
    return 0;
    
}
