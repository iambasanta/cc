#include<stdio.h>

void TOH(int n, char src[], char aux[], char dst[]){
    if(n>0){
        TOH(n-1,src,dst,aux);
        printf("Move disk %d from %s to %s. \n",n,src,dst);
        TOH(n-1,aux,src,dst);
    }
}

int main(){
    int n;
    char src[] = {'s','o','u','r','c','e','\0'};
    char aux[] = {'a','u','x','i','l','i','a','r','y','\0'};
    char dst[] = {'d','e','s','t','i','n','a','t','i','o','n','\0'};

    printf("Enter number of disks : ");
    scanf("%d",&n);
    TOH(n,src,aux,dst);

    return 0;
}
