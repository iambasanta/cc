#include<stdio.h> 
#include<graphics.h>

void boundaryfill(int x,int y,int fill_color,int boundary_color){ 
    if(getpixel(x,y)!=boundary_color && getpixel(x,y)!=fill_color){
        delay(20);
        putpixel(x,y,fill_color);
        boundaryfill(x+1,y,fill_color,boundary_color);
        boundaryfill(x,y+1,fill_color,boundary_color);
        boundaryfill(x-1,y,fill_color,boundary_color);
        boundaryfill(x,y-1,fill_color,boundary_color);
    }
} 
int main() {
    int gd=DETECT,gm;
    int x,y,r;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    printf("Enter x and y positions for circle :");
    scanf("%d%d",&x,&y);
    printf("Enter radius of circle :");
    scanf("%d",&r);
    circle(x,y,r);
    boundaryfill(x,y,4,15);
    outtextxy(200,150, "Boundary Fill");
    getch();
    closegraph();
    return 0;
} 
