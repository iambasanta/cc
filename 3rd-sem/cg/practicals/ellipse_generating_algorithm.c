#include<stdio.h> 
#include<graphics.h> 

void main() { 
    int gd=DETECT,gm;
    float p,x,y,xc,yc,a,b;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

    cleardevice();

    printf("Enter the Center of Elliplse xc and yc:\n");
    scanf("%f%f",&xc,&yc);

    printf("Enter major axis as a, and minor axis as b:\n");
    scanf("%f%f",&a,&b);

    x=0;
    y=b;

    //Region 1 
    p=(b*b)-(a*a*b)+(0.25*a*a);
    do { putpixel(xc+x,yc+y,WHITE);
        putpixel(xc+x,yc-y,WHITE);
        putpixel(xc-x,yc+y,WHITE);
        putpixel(xc-x,yc-y,WHITE);

        if(p<0) { x=x+1;
            p=p+2*b*b*x+b*b;
        } else { x=x+1;
            y=y-1;
            p=p+2*b*b*x-2*a*a*y+b*b;
        }
    } while(2*b*b*x<2*a*a*y);

    //Region 2
    p=(b*b*(x+0.5)*(x+0.5))+((y-1)*(y-1)*a*a-a*a*b*b);
    do { putpixel(xc+x,yc+y,WHITE);
        putpixel(xc+x,yc-y,WHITE);
        putpixel(xc-x,yc+y,WHITE);
        putpixel(xc-x,yc-y,WHITE);

        if(p>0) { y=y-1;
            p=p-2*a*a*y+a*a;
        } else { x=x+1;
            y=y-1;
            p=p-2*a*a*y+2*b*b*x+a*a;
        }
    } while(y!=0);

    outtextxy (300,250,"Ellipse Generation Algorithm");
    getch();
    closegraph();
    restorecrtmode();
}
