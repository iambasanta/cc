#include<stdio.h>
#include<graphics.h>

void MPCA (int xc, int yc, int r) {
    int p,x,y;
    p=1-r;
    x=0;
    y=r;
    while(x<=y) {
        putpixel(xc+x,yc+y,5);
        putpixel(xc-y,yc-x,5);
        putpixel(xc+y,yc-x,5);
        putpixel(xc-y,yc+x,5);
        putpixel(xc+y,yc+x,5);
        putpixel(xc-x,yc-y,5);
        putpixel(xc+x,yc-y,5);
        putpixel(xc-x,yc+y,5); 
        delay (200);
        if (p>0) {
            p=p+2*(x+1)-2*(y+1)+1; x++; y--; 
        } else { 
            p=p+2*(x+1)+1; x++; 
        } 
    } 
}

void main() {
    int gd=DETECT,gm;
    int xc,yc,r;
    initgraph (&gd,&gm,NULL);
    printf ("Enter the center and radius of the Circle \n");
    scanf ("%d%d%d",&xc,&yc,&r);
    MPCA (xc,yc,r);
    outtextxy (300, 250,"Mid-Point Circle Drawing Algorithm");
    getch();
}
