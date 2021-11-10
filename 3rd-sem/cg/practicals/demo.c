#include<graphics.h>

int main(){
    int gd = DETECT,gm;
    initgraph(&gd,&gm,NULL);

    circle(100,100,50);
    circle(70,75,20);
    circle(130,75,20);

    rectangle(70,130,130,160);
    rectangle(85,179,115,200);
    rectangle(30,200,170,320);
    rectangle(30,330,60,450);
    rectangle(140,330,170,450);

    delay(5000);
    closegraph();
    getch();
    return 0;

}
