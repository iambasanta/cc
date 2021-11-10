#include <stdio.h>
#include <stdlib.h>
    struct Employee
    {
        int employee_id;
        char name[20];
        int salary;
    };

int main()
{
    FILE *fp;
    int n;
    printf("Enter the number of Employee data you want to write: ");
    scanf("%d", &n);
    printf("You are wiriting for %d employees.\n",n);
    struct Employee e[n];

    fp = fopen("input.txt", "w");
    if (fp == NULL)
    {
        puts("Cannot open that file");
        exit(1);
    }
    for (int i = 0; i < n; i++)
    {
        printf("Enter name,employee_id and salary of a employee :");
        scanf("%s %d %d", e[i].name, &e[i].employee_id, &e[i].salary);
        fprintf(fp, "%s %d %d \n", e[i].name, e[i].employee_id, e[i].salary);
    }
    printf("The records of the students whose salary is greater then 20000 are: \n");
    for (int i = 0; i < n; i++)
    {
        if (e[i].salary > 20000)
        {
            printf("%d %s \n", e[i].employee_id, e[i].name);
        }
        else if(e[i].salary<20000){
            printf("No one has salary greater than 20000.");
        }
    }
    fclose(fp);
    return 0;
}
