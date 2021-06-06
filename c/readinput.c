#include<stdio.h>

int main(){
    
    FILE *fpointer = fopen("input.txt","r");
    char ch= fgetc(fpointer);
    printf("%c",ch);
    fclose(fpointer);
return 0;
}
