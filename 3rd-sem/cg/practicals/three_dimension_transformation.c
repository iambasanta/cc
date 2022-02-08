#include<stdio.h> 
// #include<conio.h> 
#include<math.h> 
// #include<process.h>
#include<graphics.h> 

int x1,x2,y2,y3,mx,my,depth; 

void draw();

void trans();

void main() {
    int gd=DETECT,gm,c;
    // initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
    initgraph(&gd,&gm,NULL);
    printf("\n\t\t3D Translation\n\n");
    printf("\nEnter 1st top value(x1,y2):");
    scanf("%d%d",&x1,&y2);
    printf("Enter right bottom value(x2,y3):");
    scanf("%d%d",&x2,&y3);
    depth=(x2-x1)/4;
    mx=(x1+x2)/2;
    my=(y2+y3)/2;
    draw();
    getch();
    cleardevice();
    trans();
    getch();
}

void draw() {
    bar3d(x1,y2,x2,y3,depth,1);
}

void trans() {
    int a1,a2,b1,b2,dep,x,y;
    printf("\n Enter the Translation Distances:");
    scanf("%d%d",&x,&y);
    a1=x1+x;
    a2=x2+x;
    b1=y2+y;
    b2=y3+y;
    dep=(a2-a1)/4;
    bar3d(a1,b1,a2,b2,dep,1);
    setcolor(5);
    draw();
} 
