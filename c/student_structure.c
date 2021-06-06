#include<stdio.h>
#include<conio.h>
struct student{
    char name[20];
    int rn;
    int percentage;
}temp;

int main(){
    int n;
    printf("Enter no of students :");
    scanf("%d",&n);
    struct student s[n];

    printf("Enter name,rollno and percentage of student :\n");
    for(int i = 0; i<n; i++){
        scanf("%s",s[i].name);
        scanf("%d",&s[i].rn);
        scanf("%d",&s[i].percentage);
    }
    printf("name rollno and percentage of student.\n");
    for(int i = 0; i<n; i++){
        printf("%s %d %d",s[i].name,s[i].rn,s[i].percentage);
    }

    printf("Student having percentage more than 60 percent are :\n");
    for(int i = 0; i<n; i++){
    if(s[i].percentage >= 60){
        printf("%s\n",s[i].name);
    }
    }

}
