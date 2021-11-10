#include<stdio.h>
#include<graphics.h>

void main(){
    ing gd = DETECT,gm;
    int x,y,r;
    initgraph(&gd,&gm,"BGI");
    printf("Enter center coordinate values :");
    scanf("%d%d",x,y);
    printf("Enter radius :");
    scanf("%d",r);
    circle(x,y,r);
    closegraph();
}
