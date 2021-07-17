#include<graphics.h>

int main(){
    int gd = DETECT,gm;
    initgraph(&gd,&gm,NULL);
    circle(170,110,50);
    getch();

    return 0;
}
