#include<stdio.h>
#include<conio.h>
struct student{
    int roll_no;
    char name[20];
    int age;
};

int main(){
    FILE *fp;
    int n;
  printf("Enter number of students you want to write :");
  scanf("%d",&n);
  struct student s[n];
  printf("You are writing details of %d students.\n",n);

  fp = fopen("student_input.txt","w");
  if(fp == NULL){
      printf("Can't open file.");
  }
  for(int i = 0; i<n; i++){
      printf("Enter roll_no,name and age of student :\n");
      scanf("%d %s %d",&s[i].roll_no,s[i].name,&s[i].age);
      fprintf(fp,"%d %s %d ",s[i].roll_no,s[i].name,s[i].age);
  }

  printf("Students who have age greater than 20 are :\n");
  
  for(int i = 0; i<n; i++){
      if(s[i].age > 25){
          printf("%d %s \n",s[i].roll_no,s[i].name);
      }
  }
    
  fclose(fp);
    return 0;
}
