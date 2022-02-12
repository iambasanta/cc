#include <stdio.h>
#include<graphics.h>
int main(){
    int gd = DETECT,gm;
    initgraph(&gd,&gm,NULL);

    float x1,x2,y1,y2,x,y,dx,dy,step;

    printf("\nEnter coordinates for first point :\n");
    printf("Enter x1 :");
    scanf("%f",&x1);
    printf("Enter y1 :");
    scanf("%f",&y1);
    printf("\nEnter coordinates for second point :\n");
    printf("Enter x2 :");
    scanf("%f",&x2);
    printf("Enter y2 :");
    scanf("%f",&y2);


    dx = x2-x1;
    dy = y2-y1;

    x = x1;
    y = y1;

    if(dy>dx){
        step = dy;
    }else{
        step = dx;
    }

    dx = dx/step;
    dy = dy/step;

    for(int i = 0; i<step; i++){
        putpixel(x,y,20);
        x = x+dx;
        y = y+dy;
        delay(50);
    }

    getch();

    closegraph();
    return 0;
}

