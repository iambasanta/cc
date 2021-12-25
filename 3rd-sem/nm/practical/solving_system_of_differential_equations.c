#include <stdio.h>
#include <math.h>
#define EPS 0.00001

float f1(float x, float y1, float y2){
	return -4*y1-2*y2+cos(x)+4*sin(x);
}

float f2(float x, float y1, float y2){
	return 3*y1+y2-3*sin(x);
//	return 2*y2-y1+x*(exp(x)-1);
//	return 4*(y1-x);
//	return 2*x*x*y1+1;
//	return x+(1-x*0.2)*y1*y2;
}
//Routine for Euler's method
void euler(float x0, float x1, float y0, float y1, float h){
	float m1, m2;
	printf("\n\nCalculation of y_1(%f) and y_2(%f):", x1, x1);
	printf("\n\n x \t\t y_1(x) \t\t y_2(x)");
	while (fabs(x0-x1)>0.0001){
		printf("\n %f\t%f\t%f", x0, y0, y1);
		m1=f1(x0, y0, y1);
		m2=f2(x0, y0, y1);
		y0=y0+h*m1;
		y1=y1+h*m2;
		x0=x0+h;
	}
	printf("\n %f\t%f\t%f", x0, y0, y1);
	return;
}
//Routine for Heun's method
void heun(float x0, float x1, float y0, float y1, float h){
	float m11, m12, m21, m22;
	printf("\n\nCalculation of y_1(%f) and y_2(%f):", x1, x1);
	printf("\n\n x \t\t y_1(x) \t\t y_2(x)");
	while (fabs(x0-x1)>0.0001){
		printf("\n %f\t%f\t%f", x0, y0, y1);
		m11=f1(x0, y0, y1);
		m21=f2(x0, y0, y1);
		m12=f1(x0+h, y0+h*m11, y1+h*m21);
		m22=f2(x0+h, y0+h*m11, y1+h*m21);
		y0=y0+0.5*h*(m11+m12);
		y1=y1+0.5*h*(m21+m22);
		x0=x0+h;
	}
	printf("\n %f\t%f\t%f", x0, y0, y1);
	return;
}
//Routine for Runge-Kutta method
void rk(float x0, float x1, float y0, float y1, float h){
	float k1, k2, k3, k4, l1, l2, l3, l4;
	printf("\n\nCalculation of y_1(%f) and y_2(%f):", x1, x1);
	printf("\n\n x \t\t y_1(x) \t\t y_2(x)");
	while (fabs(x0-x1)>0.0001){
		printf("\n %f\t%f\t%f", x0, y0, y1);
		k1=f1(x0, y0, y1);
		l1=f2(x0, y0, y1);
		k2=f1(x0+0.5*h, y0+0.5*h*k1, y1+0.5*h*l1);
		l2=f2(x0+0.5*h, y0+0.5*h*k1, y1+0.5*h*l1);
		k3=f1(x0+0.5*h, y0+0.5*h*k2, y1+0.5*h*l2);
		l3=f2(x0+0.5*h, y0+0.5*h*k2, y1+0.5*h*l2);
		k4=f1(x0+h, y0+h*k3, y1+h*l3);
		l4=f2(x0+h, y0+h*k3, y1+h*l3);
		y0=y0+(h/6)*(k1+2*(k2+k3)+k4);
		y1=y1+(h/6)*(l1+2*(l2+l3)+l4);
		x0=x0+h;
	}
	printf("\n %f\t%f\t%f", x0, y0, y1);
	return;
}

int main()
{
	float x0, yx0, yx1, xp, h;
	char q;
	printf("\n Enter the initial point x: ");
	scanf("%f", &x0);
	printf("\n Enter the value of y_1(x): ");
	scanf("%f", &yx0);
	printf("\n Enter the value of y_2(x): ");
	scanf("%f", &yx1);
	printf("\n Enter the step length: ");
	scanf("%f", &h);
	do{
		printf("\n\n Enter the point x at which y(x) is required: ");
		scanf("%f", &xp);
		heun(x0, xp, yx0, yx1, h);
		//printf("\n The approximate value of y_1(%f) is %f.", xp, yxp);
		printf("\n\n Do you want to approximate at another point?(y/n): ");
		scanf(" %c", &q);
	} while (q=='y');
	return 0;
}
