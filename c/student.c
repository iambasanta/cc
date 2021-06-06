#include <stdio.h>
#include <string.h>
struct student
{
    char Name[50];
    int Roll_no;
    int total_marks;
};

int main()
{
    int i, j, N;
    printf("Enter the number of students:");
    scanf("%d", &N);
    struct student s[N], temp;

    // storing information
    for (i = 0; i < N; i++)
    {
        printf("Enter Roll Number");
        scanf("%d", &s[i].Roll_no);
        printf("Enter  name: ");
        scanf("%s", s[i].Name);
        printf("Enter Marks :");
        scanf("%d", &s[i].total_marks);
        printf("\n");
    }

    // sorting the information in ascending order of their names
    for (i = 0; i < N; i++)
    {
        for (j = i + 1; j < N; j++)
        {
            if (strcmp(s[i].Name, s[j].Name) > 0)
            {
                temp = s[j];
                s[j] = s[i];
                s[i] = temp;
            }
        }
    }
    printf("Dispalying the information of students whose names starts with A \n");
    // displaying information of students with name starting with K
    char temporary;
    char comparison_big = 'A';
    char comparison_small = 'a';
    for (i = 0; i < N; ++i)
    {
        temporary = s[i].Name[0];
        // printf("%c", temporary);
        if (temporary == comparison_big && temporary == comparison_small)
        {
            printf("Roll number: %d\n", s[i].Roll_no);
            printf("Name: %s\n", s[i].Name);
            printf("Total Marks: %d\n", s[i].total_marks);
            printf("\n");
        }
    }
    return 0;
}
