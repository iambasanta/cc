#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    int sum = 0;
    float average = 0;
    printf("Enter size of an array :");
    scanf("%d",&n);
    int numbers[n];
    printf("Enter elements of aray :");
    for(int i = 0; i<n; i++){
        scanf("%d",&numbers[i]);
    }
    //sum
    for(int i = 0; i<n ;i++){
        sum += numbers[i];
    }
    average = sum/n;

    printf("The sum of array is : %d",sum);
    printf("The average of array is : %f",average);

    return 0;

}
