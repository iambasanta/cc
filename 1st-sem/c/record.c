#include<stdio.h>
#include<conio.h>
int main(){
        FILE *fp;

        char content[255];
        fp = fopen("record.txt","r");
        fgets(content,255,fp);
        printf("%s",content);
        fclose(fp);

    return 0;
}
