#include<stdio.h>
// #include<conio.h>
#include<ctype.h>
int main()
{
    char a[10];
    int flag, i=1;
    printf("Enter an identifier: ");
    // gets(a);
    scanf("%s", a);
    if(isalpha(a[0]) || a[0]=='_')
        flag=1;
    else
        flag=0;
    while(a[i]!='\0')
    {
        if(!isdigit(a[i]) && !isalpha(a[i]) &&a[i] != '_')
        {
            flag=0;
            break;
        }
        i++;
    }
    if(flag==1)
        printf("Valid identifier\n");
    else
        printf("Not a valid identifier\n");
    return 0;
}
