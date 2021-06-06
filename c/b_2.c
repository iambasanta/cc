#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct employee {
    int employee_id;
    char name[20];
    int salary;
};
int main(){
    int n;
    FILE *fp;
    printf("Enter no of employee to write details of : ");
    scanf("%d",&n);
    struct employee e[n];
    printf("You are writing details of %d employee.\n",n);

    fp = fopen("emplyoee_details.txt","w");
    if(fp == NULL){
        printf("Cant open filej.");
        exit(1);
    }
    for(int i = 0; i<n; i++){
        printf("Enter employee id, name and salary fo employee : ");
        scanf("%d %s %d",&e[i].employee_id,e[i].name,&e[i].salary);
        fprintf(fp,"id :%d, name:%s, age: %d",e[i].employee_id,e[i].name,e[i].salary);
    }

    printf("The list of employees who have salary more than 20000 are :\n ");

    for(int i = 0; i<n; i++){
        if(e[i].salary > 20000){
            printf("id :%d, name:%s \n", e[i].employee_id,e[i].name);
        }
    }

    fclose(fp);
    return 0;
}
