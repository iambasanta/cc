#include<graphics.h>

int main(){
    int gd = DETECT,gm;
    initgraph(&gd,&gm,NULL);

    circle(300,150,50);
    circle(270,140,10);
    circle(330,140,10);
    
    rectangle(300,130,10,160);
    rectangle(85,179,115,200);
    rectangle(30,200,170,320);
    rectangle(30,330,60,450);
    rectangle(140,330,170,450);

    delay(5000);
    closegraph();
    getch();

    return 0;
}
