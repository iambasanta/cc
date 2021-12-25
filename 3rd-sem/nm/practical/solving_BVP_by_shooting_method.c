#include <stdio.h>
#include <math.h>
#define EPS 0.00001

float f1(float x, float y1, float y2){
	return y2;
}

float f2(float x, float y1, float y2){
	return 2*x*x*y1+1;
//	return x+(1-x*0.2)*y1*y2;
}
//Routine for Euler's method
float euler(float x0, float x1, float y0, float y1, float h){
	float m1, m2;
	printf("\n\nCalculation of y(%f) for guess value %f:", x1, y1);
	printf("\n x \t\t y(x)");
	while (fabs(x0-x1)>0.0001){
		printf("\n %f\t%f", x0, y0);
		m1=f1(x0, y0, y1);
		m2=f2(x0, y0, y1);
		y0=y0+h*m1;
		y1=y1+h*m2;
		x0=x0+h;
	}
	printf("\n %f\t%f", x0, y0);
	return y0;
}
//Routine for Heun's method
float heun(float x0, float x1, float y0, float y1, float h){
	float m11, m12, m21, m22;
	printf("\n\nCalculation of y(%f) for guess value %f:", x1, y1);
	printf("\n x \t\t y(x)");
	while (fabs(x0-x1)>0.0001){
		printf("\n %f\t%f", x0, y0);
		m11=f1(x0, y0, y1);
		m21=f2(x0, y0, y1);
		m12=f1(x0+h, y0+h*m11, y1+h*m21);
		m22=f2(x0+h, y0+h*m11, y1+h*m21);
		y0=y0+0.5*h*(m11+m12);
		y1=y1+0.5*h*(m21+m22);
		x0=x0+h;
	}
	printf("\n %f\t%f", x0, y0);
	return y0;
}
//Routine for Runge-Kutta method
float rk(float x0, float x1, float y0, float y1, float h){
	float k1, k2, k3, k4, l1, l2, l3, l4;
		printf("\n\nCalculation of y(%f) for guess value %f:", x1, y1);
	printf("\n x \t\t y(x)");
	while (fabs(x0-x1)>0.0001){
		printf("\n %f\t%f", x0, y0);
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
	printf("\n %f\t%f", x0, y0);
	return y0;
}

int main()
{
	float x0, yx0, x1, yx1, guess1, guess2, guess3, yguess1, yguess2, yguess3, xp, yxp, h;
	char q;
	printf("\n Enter the first boundary conditions x and y(x): ");
	scanf("%f%f", &x0, &yx0);
	printf("\n Enter the second boundary conditions x and y(x): ");
	scanf("%f%f", &x1, &yx1);
	printf("\n Enter the step length: ");
	scanf("%f", &h);
	printf("\n Enter the first guess of y'(%f): ", x0);
	scanf("%f", &guess1);
	yguess1=heun(x0, x1, yx0, guess1, h);
	printf("\n The calculated value of y(%f) is %f.", x1, yguess1);
	if (fabs(yguess1-yx1)<EPS) {
		guess3=guess1;
	}
	else {
	printf("\n\n Enter the second guess of y'(%f): ", x0);
	scanf("%f", &guess2);
	yguess2=heun(x0, x1, yx0, guess2, h);
	printf("\n The calculated value of y(%f) is %f.", x1, yguess2);
	if (fabs(yguess2-yx1)<EPS) {
		guess3=guess2;
		}	
	else {
		do {
			guess3=guess2+(yx1-yguess2)*(guess1-guess2)/(yguess1-yguess2);
			yguess3=heun(x0, x1, yx0, guess3, h);
			//printf("\n\n%f\t%f", guess3, yguess3);
			guess1=guess2;
			guess2=guess3;
			yguess1=yguess2;
			yguess2=yguess3;
			} while (fabs(yguess2-yx1)>=EPS);
		printf("\n\n The extrapolated value of y'(%f) is %f.", x0, guess3);
		printf("\n\n The calculated value of y(%f) using y'(%f)=%f is %f.", x1, x0, guess3, yguess3);
		}
	}
	do{
		printf("\n\n Enter the point x at which y(x) is required: ");
		scanf("%f", &xp);
		yxp=heun(x0, xp, yx0, guess3, h);
		printf("\n The approximate value of y(%f) is %f.", xp, yxp);
		printf("\n\n Do you want to approximate at another point?(y/n): ");
		scanf(" %c", &q);
	} while (q=='y');
	return 0;
}
