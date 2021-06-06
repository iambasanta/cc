#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct student{
    int roll_no;
    char name[20];
    int age;
};
int main(){
  int n;
  FILE *fp;
  clrscr();
  printf("Enter the no of student you want to write details of :");
  scanf("%d",&n);
  printf("You are writing details of %d students.\n",n);
  struct student s[n];

  fp = fopen("student_details.txt","w");
  if(fp == NULL){
      gets("cant open file.");
      exit(1);
  }

  for(int i = 0; i<n; i++){
      printf("Enter roll_no, name and age of student :");
      scanf("%d %s %d",&s[i].roll_no,s[i].name,&s[i].age);
      fprintf(fp,"rollno :%d, name:%s, age:%d, ",s[i].roll_no,s[i].name,s[i].age);

  }

  printf("The list of students who are older than 20 years :\n");

  for(int i = 0; i<n; i++){
      if(s[i].age > 20){
          printf("rllno :%d, name:%s \n",s[i].roll_no,s[i].name);
      }
  }

  fclose(fp);
  return 0;


}
