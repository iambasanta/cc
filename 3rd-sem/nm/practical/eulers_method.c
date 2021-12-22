#include<stdio.h>
#include<math.h>

float f (float x, float y){
    return x*x+y*x;
}

int main(){
    int i,n;
    float x,y,xp,h,dy;

    printf("\n Input initial values of x and y: ");
    scanf("%f%f",&x,&y);

    printf("\n Input x at which y is required : ");
    scanf("%f",&xp);

    printf("\n Input step size h: ");
    scanf("%f",&h);

    n = (int)((xp-x)/h+0.5);

    for(i = 1; i<=n; i++){
        dy = h*f(x,y);
        x = x+h;
        y = y +dy;
        printf("\n %d\t %f\t %f\n",i,x,y);
    }

    printf("\n Value of y at x = %f is %f\n",x,y);
    return 0;
}
